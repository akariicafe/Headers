@class NSString, IDSDaemonRequestTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IDSPhoneCertificateVendor : NSObject <IDSDaemonListenerProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSPhoneCertificateVendor *strongSelfReference;
@property (readonly, nonatomic) IDSDaemonRequestTimer *daemonRequestTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (BOOL)_isPhoneCertificateVendorSupported;
- (id)_clientErrorForCode:(long long)a0 underlyingError:(id)a1;
- (id)_scheduleTimeoutForCarrierTokenCompletionBlock:(id /* block */)a0;
- (id)_scheduleTimeoutForPhoneAuthenticationCertificateRequestCompletionBlock:(id /* block */)a0;
- (id)_scheduleTimeoutForPhoneAuthenticationSignatureRequestCompletionBlock:(id /* block */)a0;
- (id)_debugDescriptionForErrorCode:(long long)a0;
- (void)_updateSelfRetentionBasedOnInFlightRequestCount;
- (void)authenticatePhoneWithCompletion:(id /* block */)a0;
- (void)generatePhoneAuthenticationSignatureOverData:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestCarrierTokenWithParameters:(id)a0 completion:(id /* block */)a1;
- (long long)_subscriptionSourceFromIntegerValue:(long long)a0;
- (long long)_subscriptionSourceForContext:(id)a0;
- (void)requestCarrierTokenWithMessageBody:(id)a0 completion:(id /* block */)a1;
- (id)_scheduleTimeoutForPhoneSubscriptionSourceCompletionBlock:(id /* block */)a0;
- (void)setCurrentPhoneUserSubscriptionSource:(long long)a0 completion:(id /* block */)a1;
- (long long)currentPhoneUserSubscriptionSourceWithError:(id *)a0;
- (void)requestCurrentPhoneUserSubscriptionSourceWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRequestCarrierTokenString:(id)a0 requestUUID:(id)a1 error:(id)a2;
- (void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)a0 requestUUID:(id)a1 error:(id)a2;
- (void)didGeneratePhoneAuthenticationSignature:(id)a0 nonce:(id)a1 certificates:(id)a2 labelIDs:(id)a3 inputData:(id)a4 requestUUID:(id)a5 error:(id)a6;
- (void)didSetPhoneUserSubscriptionSource:(id)a0 requestUUID:(id)a1 error:(id)a2;
- (void)didFetchPhoneUserSubscriptionSource:(id)a0 requestUUID:(id)a1 error:(id)a2;

@end
