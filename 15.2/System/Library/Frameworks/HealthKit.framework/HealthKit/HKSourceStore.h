@class NSString, HKProxyProvider;

@interface HKSourceStore : NSObject <_HKXPCExportable, HKSourceStoreClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)fetchOrderedSourcesForObjectType:(id)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (void)fetchAllSourcesWithCompletion:(id /* block */)a0;
- (void)fetchHasSampleWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deleteSourceWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateOrderedSources:(id)a0 forObjectType:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)exportedInterface;

@end
