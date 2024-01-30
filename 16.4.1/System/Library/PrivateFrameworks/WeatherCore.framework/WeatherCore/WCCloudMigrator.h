@class WCDeviceLookup;

@interface WCCloudMigrator : NSObject

@property (readonly, nonatomic) WCDeviceLookup *deviceLookup;

- (void)migrateStore:(id)a0 toStore:(id)a1 completionBlock:(id /* block */)a2;
- (id)init;
- (BOOL)storeRequiresMigration:(id)a0;
- (void).cxx_destruct;
- (void)eraseStoreIfNeeded:(id)a0;

@end
