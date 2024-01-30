@class NSString, NSObject;
@protocol OS_dispatch_queue, BCSMetricFactoryProtocol;

@interface BCSQueryChopper : NSObject <BCSQueryChopperProtocol> {
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    id<BCSMetricFactoryProtocol> _metricFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)queryChopperDelegate:(id)a0 fetchLinkItemModelWithURL:(id)a1 isBloomFilterCached:(BOOL)a2 forClientBundleID:(id)a3 metric:(id)a4 completion:(id /* block */)a5;
- (void)queryChopperDelegate:(id)a0 isBusinessRegisteredForURL:(id)a1 isBloomFilterCached:(BOOL)a2 forClientBundleID:(id)a3 metric:(id)a4 completion:(id /* block */)a5;

@end
