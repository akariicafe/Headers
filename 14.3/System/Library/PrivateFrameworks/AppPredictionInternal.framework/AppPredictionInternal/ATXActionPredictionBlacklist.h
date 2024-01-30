@class _PASLock, ATXAppPredictionBlacklist;

@interface ATXActionPredictionBlacklist : NSObject {
    _PASLock *_lock;
    id _blacklistNotificationToken;
    ATXAppPredictionBlacklist *_appPredictionBlacklist;
    int _prefsChangeNotificationToken;
}

+ (id)sharedInstanceWithAppPredictionBlacklist;
+ (id)sharedInstanceWithoutAppPredictionBlacklist;

- (id)init;
- (void).cxx_destruct;
- (void)_handlePrefsChange;
- (void)dealloc;
- (void)setBlacklistFromAssetData:(id)a0 predictionBlacklist:(id)a1 shortcutBlacklist:(id)a2 primaryShortcutBlacklist:(id)a3;
- (id)shouldPredictBundleIdHelper:(id)a0 action:(id)a1;
- (id)disabledBundlesInSettings;
- (id)initWithAppPredictionBlacklist:(id)a0;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1;
- (BOOL)isBundleIdBlacklisted:(id)a0;
- (id)homeScreenDisabledShortcutsInSettings;
- (BOOL)shouldPredictBundleId:(id)a0 action:(id)a1;
- (void)addToBlacklists:(id)a0 blacklistAppList:(id)a1 blacklistActionList:(id)a2 blacklistAppAndActionList:(id)a3;
- (id)_prefsDisabledApps;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1 forPrimaryShortcuts:(BOOL)a2;

@end
