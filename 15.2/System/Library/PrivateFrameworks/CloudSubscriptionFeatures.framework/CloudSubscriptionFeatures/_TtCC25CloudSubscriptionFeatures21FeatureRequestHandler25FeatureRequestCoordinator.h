@interface _TtCC25CloudSubscriptionFeatures21FeatureRequestHandler25FeatureRequestCoordinator : NSObject <CloudSubscriptionFeatures.FeaturesServiceRequest> {
    void /* unknown type, empty encoding */ requestHandler;
    void /* unknown type, empty encoding */ requestCoalescer;
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)requestFeatureWithId:(id)a0 ignoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestGeoClassificationFor:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;
- (void)getFeatureEligibilityFor:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)clearCacheAndNotify;

@end
