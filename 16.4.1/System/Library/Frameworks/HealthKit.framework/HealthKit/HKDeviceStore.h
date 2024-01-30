@class NSString, HKProxyProvider;

@interface HKDeviceStore : NSObject <_HKXPCExportable, HKDeviceStoreClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)fetchAllDevicesWithCompletion:(id /* block */)a0;
- (void)fetchDevicesMatchingValues:(id)a0 forProperty:(id)a1 completion:(id /* block */)a2;

@end
