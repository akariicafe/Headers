@class NSMutableDictionary;

@interface IMBalloonPluginAttributionController : NSObject

@property (retain, nonatomic) NSMutableDictionary *expiredBundleIDToTimestampMap;
@property (retain, nonatomic) NSMutableDictionary *bundleIDsDisplayingAttribution;
@property (nonatomic) BOOL hasPerformedFirstAppExtensionLoad;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_currentTimestamp;
- (void)_handleInstalledPluginsChanged;
- (double)_expiryTimeout;
- (void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
- (void)_saveToFile;
- (void)startExpiryTimer;
- (void)didShowAttributionForBundleIDs:(id)a0;
- (BOOL)shouldShowAttributionForBundleID:(id)a0;

@end
