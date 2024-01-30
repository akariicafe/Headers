@class NSMutableDictionary;

@interface InstalledAppsCache : NSObject {
    NSMutableDictionary *_appCache;
    NSMutableDictionary *_nameCache;
    NSMutableDictionary *_pluginCache;
    NSMutableDictionary *_siriExtensions;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_rebuildCache;
- (void)_addApplicationToCache:(id)a0;
- (void)_logStatus;
- (id)_nameForUUID:(id)a0 fromDict:(id)a1 bundleId:(id *)a2;
- (id)_bundleIDFromUUID:(id)a0;
- (BOOL)_isPlaceholder:(id)a0;
- (void)_removeApplicationFromCache:(id)a0;
- (void)_appRegistrationChanged;
- (id)appNameForUUID:(id)a0 bundleId:(id *)a1;
- (id)lsBundleIDForUUID:(id)a0;
- (void)_appRegistrationAdded:(id)a0;
- (void)_appRegistrationRemoved:(id)a0;
- (id)pluginNameForUUID:(id)a0 bundleId:(id *)a1;
- (BOOL)application:(id)a0 hasSiriExtension:(id)a1;
- (void)_currentLocaleChanged;

@end
