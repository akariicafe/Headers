@class WeatherDeviceLookup;

@interface WeatherCloudMigrator : NSObject

@property (readonly, nonatomic) WeatherDeviceLookup *deviceLookup;

- (void).cxx_destruct;
- (id)init;
- (BOOL)storeRequiresMigration:(id)a0;
- (void)eraseStoreIfNeeded:(id)a0;
- (void)migrateStore:(id)a0 toStore:(id)a1 completionBlock:(id /* block */)a2;

@end
