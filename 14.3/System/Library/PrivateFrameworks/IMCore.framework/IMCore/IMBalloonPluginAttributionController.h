@class NSMutableDictionary;

@interface IMBalloonPluginAttributionController : NSObject

@property (retain, nonatomic) NSMutableDictionary *expiredBundleIDToTimestampMap;
@property (retain, nonatomic) NSMutableDictionary *bundleIDsDisplayingAttribution;
@property (nonatomic) BOOL hasPerformedFirstAppExtensionLoad;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_currentTimestamp;
- (void)_handleInstalledPluginsChanged;
- (double)_expiryTimeout;
- (void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
- (void)_saveToFile;
- (void)startExpiryTimer;
- (void)didShowAttributionForBundleIDs:(id)a0;
- (BOOL)shouldShowAttributionForBundleID:(id)a0;

@end
