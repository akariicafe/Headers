@class PKPaymentAuthorizationRemoteAlertViewController, NSMutableSet, NSString;
@protocol PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationRemoteAlertViewControllerExportedObject : NSObject <PKPaymentAuthorizationServiceProtocol> {
    BOOL _dismissed;
}

@property (retain, nonatomic) NSMutableSet *completionHandlers;
@property (weak, nonatomic) id<PKPaymentAuthorizationServiceProtocol> delegate;
@property (weak, nonatomic) PKPaymentAuthorizationRemoteAlertViewController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleHostApplicationWillResignActive:(BOOL)a0;
- (void)handleHostApplicationDidBecomeActive;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)a0;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)a0;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizeDisbursementWithResult:(id)a0;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)a0;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)a0 signatureRequest:(id)a1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)a0;
- (void)handleHostApplicationDidCancel;
- (void)handleDismissWithCompletion:(id /* block */)a0;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithController:(id)a0;
- (void)dismissed;
- (void)_executeCompletionHandlers;

@end
