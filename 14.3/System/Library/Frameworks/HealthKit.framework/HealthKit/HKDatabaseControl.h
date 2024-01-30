@class NSString, HKProxyProvider;

@interface HKDatabaseControl : NSObject <_HKXPCExportable, HKDatabaseControlClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)obliterateHealthDataWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (void)performMigrationWithCompletion:(id /* block */)a0;
- (void)getHealthDirectorySizeInBytesWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0;

@end
