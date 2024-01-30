@class NSObject, NSString, PKRemotePaymentRequest, PKContinuityPaymentService;
@protocol OS_dispatch_queue, OS_dispatch_source, PKContinuityPaymentCoordinatorDelegate;

@interface PKContinuityPaymentCoordinator : NSObject <PKContinuityPaymentServiceDelegate> {
    PKContinuityPaymentService *_continuityPaymentService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_deviceUpdateTimeoutTimer;
    NSObject<OS_dispatch_source> *_deviceTotalUpdateTimeoutTimer;
    BOOL _isUpdatingDevices;
    PKRemotePaymentRequest *_currentRemotePaymentRequest;
    long long _messageSendCount;
    long long _messageSendCompleteCount;
}

@property (weak, nonatomic) id<PKContinuityPaymentCoordinatorDelegate> delegate;
@property (nonatomic) double updatePaymentDeviceTimeout;
@property (readonly, nonatomic) PKRemotePaymentRequest *currentRemotePaymentRequest;
@property (readonly, nonatomic, getter=isAwaitingReply) BOOL awaitingReply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendRemotePaymentRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithContinuityPaymentService:(id)a0;
- (void)updatePaymentDevices;
- (void)cancelRemotePaymentRequestWithCompletion:(id /* block */)a0;
- (void)sendPaymentClientUpdate:(id)a0 completion:(id /* block */)a1;
- (void)sendPaymentResult:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)didReceiveUpdatedPaymentDevices:(id)a0;
- (void)didReceivePayment:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)a0;
- (void)_resetRequest;
- (void)dealloc;
- (void)_deviceUpdateTimerDidTimeout;
- (void)_deviceUpdateTotalTimerDidTimeout;
- (void)_queue_sendPaymentResult:(id)a0 completion:(id /* block */)a1;
- (void)_send_didReceiveUpdatedPaymentDevice:(id)a0;
- (void)_send_didReceivePayment:(id)a0;
- (void)_send_didReceiveCancellation;
- (void)_send_didTimeoutUpdatePaymentDevices;
- (void)_send_didTimeoutTotalUpdatePaymentDevices;

@end
