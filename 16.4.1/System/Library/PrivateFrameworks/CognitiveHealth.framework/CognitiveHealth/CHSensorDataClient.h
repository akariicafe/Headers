@class CHXPCClientHelper;

@interface CHSensorDataClient : NSObject <CHSensorDataProtocol> {
    CHXPCClientHelper *_clientHelper;
}

- (id)init;
- (void).cxx_destruct;
- (void)aggregatedMotionAndAppLaunchDataFromDate:(id)a0 toDate:(id)a1 completion:(id /* block */)a2;
- (void)embeddingVectorForBundleId:(id)a0 completion:(id /* block */)a1;

@end
