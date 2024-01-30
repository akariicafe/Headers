@class NSDictionary, NSMutableDictionary;

@interface ATUserDefaults : NSObject {
    NSMutableDictionary *_defaults;
}

@property (nonatomic) BOOL hasCompletedDataMigration;
@property (retain, nonatomic) NSDictionary *diskUsageInfo;

+ (id)sharedInstance;
+ (id)readOnlyDefaults;
+ (void)synchronize;

- (void)updateHostInfo:(id)a0 disabledAssetTypes:(id)a1;
- (id)allHosts;
- (void)updateLastSyncWithHostLibrary:(id)a0;
- (id)hostInfoForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)removeHost:(id)a0;
- (id)init;
- (void)_updateDefaults;

@end
