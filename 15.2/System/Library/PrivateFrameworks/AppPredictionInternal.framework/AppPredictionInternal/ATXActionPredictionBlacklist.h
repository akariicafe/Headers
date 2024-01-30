@class _PASLock, ATXAppPredictionBlacklist;

@interface ATXActionPredictionBlacklist : NSObject {
    _PASLock *_lock;
    id _blacklistNotificationToken;
    ATXAppPredictionBlacklist *_appPredictionBlacklist;
    int _prefsChangeNotificationToken;
}

+ (id)sharedInstanceWithoutAppPredictionBlacklist;
+ (id)sharedInstanceWithAppPredictionBlacklist;

- (BOOL)isBundleIdBlacklisted:(id)a0;
- (id)shouldPredictBundleIdHelper:(id)a0 action:(id)a1;
- (BOOL)shouldPredictBundleId:(id)a0 action:(id)a1;
- (void)addToBlacklists:(id)a0 blacklistAppList:(id)a1 blacklistActionList:(id)a2 blacklistAppAndActionList:(id)a3;
- (id)homeScreenDisabledShortcutsInSettings;
- (void).cxx_destruct;
- (id)initWithAppPredictionBlacklist:(id)a0;
- (id)init;
- (void)setBlacklistFromAssetData:(id)a0 predictionBlacklist:(id)a1 shortcutBlacklist:(id)a2 primaryShortcutBlacklist:(id)a3;
- (void)_handlePrefsChange;
- (id)_prefsDisabledApps;
- (id)disabledBundlesInSettings;
- (void)dealloc;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1 forPrimaryShortcuts:(BOOL)a2;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1;

@end
