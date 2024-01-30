@class NSMutableDictionary, NSObject;
@protocol PRProximityEstimatorDelegate, OS_os_log, OS_dispatch_queue;

@interface PRProximityEstimator : NSObject {
    BOOL usingST;
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *devicesMonitered;
}

@property (readonly, weak) id<PRProximityEstimatorDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)invokeDelegateBlock:(id /* block */)a0;
- (id)initSingleThresholdEstmatorWithDelegate:(id)a0 delegateQueue:(id)a1;
- (BOOL)addRssiSample:(double)a0 channel:(unsigned int)a1 forPeer:(id)a2 withError:(id *)a3;
- (BOOL)stopEstimatingProximityFor:(id)a0 withError:(id *)a1;
- (BOOL)startEstimatingProximityFor:(id)a0 peerDeviceModel:(id)a1 withError:(id *)a2;

@end
