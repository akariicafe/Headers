@class NSArray, CDPDCircleStateObserver, NSObject;
@protocol OS_dispatch_queue, CDPDCircleProxy, CDPDCircleDelegate, CDPStateUIProviderInternal;

@interface CDPDCircleController : NSObject {
    CDPDCircleStateObserver *_circleJoinObserver;
    NSObject<OS_dispatch_queue> *_requestSynchronizationQueue;
    NSObject<OS_dispatch_queue> *_retryQueue;
    unsigned long long _cliqueStatusRetryCount;
    NSArray *_retryIntervals;
}

@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (weak, nonatomic) NSObject<CDPDCircleDelegate> *delegate;
@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;

- (id)peerID;
- (unsigned long long)circleStatus;
- (void)joinCircleWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)synchronizeCircleViews;
- (id)initWithUiProvider:(id)a0 delegate:(id)a1 circleProxy:(id)a2;
- (void)useCircleInfoToUpdateNameForDevices:(id)a0;
- (void)applyToJoinCircleWithJoinHandler:(id /* block */)a0;
- (void)cancelApplicationToJoinCircle;
- (void)prepareCircleStateForRecovery;
- (void)joinCircleIgnoringBackups:(BOOL)a0 completion:(id /* block */)a1;
- (void)_joinCircleIgnoringBackups:(BOOL)a0 completion:(id /* block */)a1;
- (void)_joinCircleFallbackWithResult:(id)a0 ignoreBackups:(BOOL)a1 completion:(id /* block */)a2;
- (void)promptForCredentials:(id /* block */)a0;
- (void)_attemptCustodianBackupRecoveryWithInfo:(id)a0 result:(id)a1 ignoreBackups:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)canRetryCliqueStatus;
- (long long)nextRetryInterval;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(id /* block */)a0;
- (void)_silentReauthWithCompletion:(id /* block */)a0;
- (id)_peerDeviceNamesByPeerID;
- (void)_requestToJoinWithObserver:(id)a0 completion:(id /* block */)a1;
- (void)_requestCircleJoinWithObserver:(id)a0 requestBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_requestToJoinWithRequestBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)resetCircleIncludingCloudKitData:(BOOL)a0 cloudKitResetReasonDescription:(id)a1 withCompletion:(id /* block */)a2;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(id /* block */)a0;

@end
