@class NSObject;
@protocol CHSensorDataProtocol;

@interface CHSensorData : NSObject {
    NSObject<CHSensorDataProtocol> *_xpcClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)aggregatedMotionAndAppLaunchDataFromDate:(id)a0 toDate:(id)a1 completion:(id /* block */)a2;
- (void)embeddingVectorForBundleId:(id)a0 completion:(id /* block */)a1;

@end
