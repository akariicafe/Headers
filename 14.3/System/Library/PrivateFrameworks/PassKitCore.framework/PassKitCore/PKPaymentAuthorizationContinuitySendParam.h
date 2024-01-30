@class PKRemotePaymentRequest;

@interface PKPaymentAuthorizationContinuitySendParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) PKRemotePaymentRequest *remotePaymentRequest;

+ (id)paramWithRemotePaymentRequest:(id)a0;

- (void).cxx_destruct;

@end
