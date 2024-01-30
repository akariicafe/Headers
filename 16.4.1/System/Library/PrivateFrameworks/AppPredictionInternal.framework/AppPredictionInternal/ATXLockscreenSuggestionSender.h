@class NSUserDefaults, ATXLockscreenBlacklist, ATXActionNotificationServer;

@interface ATXLockscreenSuggestionSender : NSObject {
    ATXLockscreenBlacklist *_lockscreenBlacklist;
    ATXActionNotificationServer *_actionNotificationServer;
    NSUserDefaults *_userDefaults;
}

- (id)_cachedExecutableIdentifier;
- (void)_updateCachedExecutableIdentifierWithSuggestion:(id)a0;
- (id)init;
- (id)initWithLockscreenBlacklist:(id)a0 actionNotificationServer:(id)a1 userDefaults:(id)a2;
- (void)blendingLayerDidUpdateLockscreenUICache:(id)a0;
- (void).cxx_destruct;

@end
