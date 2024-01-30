@class PRProximityEstimator, NSString, NSMutableDictionary, PRBeacon, NSObject, PRSharingChoice;
@protocol OS_os_log, OS_dispatch_queue, PRSharingSessionDelegate;

@interface PRSharingSession : NSObject <PRProximityEstimatorDelegate, PRBeaconDelegate> {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    PRProximityEstimator *_btProxEstimator;
    NSMutableDictionary *_trackedBTPeers;
    NSMutableDictionary *_trackedBTPeersDevice;
    PRBeacon *_nearbyDaemonSession;
    BOOL _needToRestart;
    id /* block */ _reportWatchdog;
    BOOL _scoresReported;
    PRSharingChoice *_sharingChoiceEstimator;
}

@property (weak) id<PRSharingSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)didFailWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)startInitiating;
- (BOOL)addRssiSample:(double)a0 channel:(unsigned int)a1 forPeer:(id)a2 peerDeviceModel:(id)a3 withError:(id *)a4;
- (void)stopInitiating;
- (void)beacon:(id)a0 didChangeState:(unsigned long long)a1;
- (void)beacon:(id)a0 didFailWithError:(id)a1;
- (void)beacon:(id)a0 didOutputRangeResults:(id)a1;
- (void)estimator:(id)a0 didEstimateProximity:(long long)a1 toPeer:(id)a2;
- (void)invokeDelegateBlock:(id /* block */)a0;
- (void)logScores:(id)a0;
- (void)onNewSharingChoiceScores:(id)a0;
- (void)startWatchDogWithDuration:(long long)a0;
- (void)stopProx;
- (BOOL)trackNewBTPeer:(id)a0 withDviceModel:(id)a1 error:(id *)a2;
- (void)watchDogTimedOut;

@end
