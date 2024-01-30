@class NSString, HKTaskServerProxyProvider;

@interface HKRaceRouteClusterStore : NSObject <_HKXPCExportable, HKRaceRouteClusterStoreClient> {
    HKTaskServerProxyProvider *_proxyProvider;
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
- (void)fetchRaceRouteClustersForActivityType:(unsigned long long)a0 completion:(id /* block */)a1;

@end
