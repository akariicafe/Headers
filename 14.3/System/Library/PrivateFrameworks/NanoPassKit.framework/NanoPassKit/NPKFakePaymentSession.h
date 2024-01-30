@class PKFieldDetector, NSString, NSDictionary, NSObject, PKPass;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKFakePaymentSession : NPKQuickPaymentSession <PKFieldDetectorObserver>

@property (retain, nonatomic) PKPass *ourCurrentPass;
@property (retain, nonatomic) NSDictionary *ourVasPasses;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ourCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ourInternalQueue;
@property (nonatomic) BOOL ourConfirmed;
@property (nonatomic) BOOL ourInServiceMode;
@property (nonatomic) BOOL ourPerformedFirstActivation;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) PKFieldDetector *fieldDetector;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) unsigned long long changeCardToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCredential:(id)a0;
- (void)fieldDetectorDidEnterField:(id)a0 withProperties:(id)a1;
- (BOOL)startSession;
- (id)vasPasses;
- (BOOL)sessionStarted;
- (void)setDeferAuthorization:(BOOL)a0;
- (void)setCurrentPass:(id)a0;
- (void)setVasPasses:(id)a0;
- (id)currentPass;
- (BOOL)inServiceMode;
- (void)setInServiceMode:(BOOL)a0;
- (void)confirmSessionExpectingCredential:(BOOL)a0;
- (void)deactivateSessionWithCompletion:(id /* block */)a0;
- (void)_handleTimeoutTimer;
- (void)_setTimeoutTimer;
- (void)_handleTransactionCompleteDarwinNotification;
- (void)_scheduleDidActivateEventForPass:(id)a0;
- (void)_handleSessionHasCredentialIfNecessaryWithCurrentPass:(id)a0;
- (void)_sendTransactionCompleteToDelegate;
- (BOOL)deferAuthorization;

@end
