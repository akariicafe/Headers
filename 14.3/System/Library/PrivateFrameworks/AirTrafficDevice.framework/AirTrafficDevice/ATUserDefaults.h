@class NSDictionary, NSMutableDictionary;

@interface ATUserDefaults : NSObject {
    NSMutableDictionary *_defaults;
}

@property (nonatomic) BOOL hasCompletedDataMigration;
@property (retain, nonatomic) NSDictionary *diskUsageInfo;

+ (id)sharedInstance;
+ (void)synchronize;
+ (id)readOnlyDefaults;

- (id)init;
- (void).cxx_destruct;
- (void)_updateDefaults;
- (id)allHosts;
- (void)updateHostInfo:(id)a0 disabledAssetTypes:(id)a1;
- (void)updateLastSyncWithHostLibrary:(id)a0;
- (void)removeHost:(id)a0;
- (id)hostInfoForIdentifier:(id)a0;

@end
