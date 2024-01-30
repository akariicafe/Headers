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

- (void)registerMaintenanceActivity;
- (id)resourceInputModes;
- (BOOL)hasActiveInputManagers;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (void)reduceCacheToSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)jettisonAllActiveInputManagers;
- (void)cacheInputManager:(id)a0;
- (void)startSyncHelper;
- (BOOL)isActiveInputManager:(id)a0;
- (id)activeInputModeIdentifiers;
- (void)dealloc;

@end
