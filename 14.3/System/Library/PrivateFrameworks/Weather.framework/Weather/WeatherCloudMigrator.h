@class WeatherDeviceLookup;

@interface WeatherCloudMigrator : NSObject

@property (readonly, nonatomic) WeatherDeviceLookup *deviceLookup;

- (id)init;
- (void).cxx_destruct;
- (BOOL)storeRequiresMigration:(id)a0;
- (void)eraseStoreIfNeeded:(id)a0;
- (void)migrateStore:(id)a0 toStore:(id)a1 completionBlock:(id /* block */)a2;

@end
