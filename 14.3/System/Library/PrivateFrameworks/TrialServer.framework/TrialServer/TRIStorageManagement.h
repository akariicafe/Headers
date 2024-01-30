@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>

- (BOOL)requestTrialStorageResetOnNextLaunch;
- (BOOL)prepareTrialStorage;
- (BOOL)_readSchemaVersion:(unsigned int *)a0;
- (BOOL)_readDeviceIdWithSchemaVersion:(unsigned int)a0 intoData:(id *)a1;
- (BOOL)_clearStorage;
- (BOOL)_writeDeviceIdWithData:(id)a0 schemaVersion:(unsigned int)a1;
- (BOOL)_writeSchemaVersion:(unsigned int)a0;
- (BOOL)_clearContainerStorage;
- (BOOL)_runNamespaceDatabaseBlock:(id /* block */)a0;

@end
