@class NSUserDefaults, ATXLockscreenBlacklist, ATXActionNotificationServer;

@interface ATXLockscreenSuggestionSender : NSObject {
    ATXLockscreenBlacklist *_lockscreenBlacklist;
    ATXActionNotificationServer *_actionNotificationServer;
    NSUserDefaults *_userDefaults;
}

- (id)_cachedExecutableIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithLockscreenBlacklist:(id)a0 actionNotificationServer:(id)a1 userDefaults:(id)a2;
- (void)_updateCachedExecutableIdentifierWithSuggestion:(id)a0;
- (void)blendingLayerDidUpdateLockscreenUICache:(id)a0;

@end
