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
- (id)initWithAppPredictionBlacklist:(id)a0;
- (void)addToBlacklists:(id)a0 blacklistAppList:(id)a1 blacklistActionList:(id)a2 blacklistAppAndActionList:(id)a3;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1;
- (id)shouldPredictBundleIdHelper:(id)a0 action:(id)a1;
- (BOOL)shouldPredictBundleId:(id)a0 action:(id)a1;
- (void)dealloc;
- (id)homeScreenDisabledShortcutsInSettings;
- (void)_handlePrefsChange;
- (id)disabledBundlesInSettings;
- (id)init;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1 forPrimaryShortcuts:(BOOL)a2;
- (id)_prefsDisabledApps;
- (void).cxx_destruct;
- (void)setBlacklistFromAssetData:(id)a0 predictionBlacklist:(id)a1 shortcutBlacklist:(id)a2 primaryShortcutBlacklist:(id)a3;

@end
