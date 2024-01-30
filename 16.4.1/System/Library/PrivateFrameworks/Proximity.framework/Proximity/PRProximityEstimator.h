@class NSMutableDictionary, NSObject;
@protocol PRProximityEstimatorDelegate, OS_os_log, OS_dispatch_queue;

@interface PRProximityEstimator : NSObject {
    BOOL usingST;
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *devicesMonitered;
}

@property (readonly, weak) id<PRProximityEstimatorDelegate> delegate;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addRssiSample:(double)a0 channel:(unsigned int)a1 forPeer:(id)a2 withError:(id *)a3;
- (id)initSingleThresholdEstmatorWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)invokeDelegateBlock:(id /* block */)a0;
- (BOOL)startEstimatingProximityFor:(id)a0 peerDeviceModel:(id)a1 withError:(id *)a2;
- (BOOL)stopEstimatingProximityFor:(id)a0 withError:(id *)a1;

@end
