@class NSDictionary, NSNumber, NSMutableDictionary;

@interface ATUserDefaults : NSObject {
    NSMutableDictionary *_defaults;
}

@property (nonatomic) BOOL hasCompletedDataMigration;
@property (retain, nonatomic) NSDictionary *diskUsageInfo;
@property (copy, nonatomic) NSNumber *minimumNetworkLinkQualityForDownloads;

+ (id)sharedInstance;
+ (void)synchronize;
+ (id)readOnlyDefaults;

- (void)_updateDefaults;
- (void)updateHostInfo:(id)a0 disabledAssetTypes:(id)a1;
- (id)allHosts;
- (id)init;
- (id)hostInfoForIdentifier:(id)a0;
- (void)updateLastSyncWithHostLibrary:(id)a0;
- (void).cxx_destruct;
- (void)removeHost:(id)a0;

@end
