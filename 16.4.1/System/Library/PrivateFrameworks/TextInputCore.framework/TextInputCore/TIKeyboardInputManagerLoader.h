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

- (void)cacheInputManager:(id)a0;
- (void)releaseAllInputManagers:(BOOL)a0;
- (BOOL)hasActiveInputManagers;
- (void)prepareForKeyboardInactivity;
- (BOOL)isActiveInputManager:(id)a0;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (void)dealloc;
- (void)prepareForKeyboardActivity;
- (void)jettisonAllActiveInputManagers;
- (void)registerMaintenanceActivity;
- (id)init;
- (id)resourceInputModes;
- (id)activeInputModeIdentifiers;
- (void)startSyncHelper;
- (void).cxx_destruct;
- (void)reduceCacheToSize:(unsigned long long)a0;

@end
