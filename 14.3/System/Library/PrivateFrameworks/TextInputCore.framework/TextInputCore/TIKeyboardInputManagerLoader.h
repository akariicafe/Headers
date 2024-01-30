@class NSMutableDictionary, TIKeyboardInputManagerLoaderSyncHelper, TIKeyboardInputManagerBase, NSXPCConnection;

@interface TIKeyboardInputManagerLoader : NSObject {
    TIKeyboardInputManagerLoaderSyncHelper *_helper;
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}

@property (retain, nonatomic) TIKeyboardInputManagerBase *mostRecentlyRequested;
@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (BOOL)hasActiveInputManagers;
- (id)init;
- (void).cxx_destruct;
- (void)startSyncHelper;
- (void)reduceCacheToSize:(unsigned long long)a0;
- (void)dealloc;
- (void)jettisonAllActiveInputManagers;
- (BOOL)isActiveInputManager:(id)a0;
- (void)registerMaintenanceActivity;
- (id)activeInputModeIdentifiers;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (void)cacheInputManager:(id)a0;
- (id)resourceInputModes;

@end
