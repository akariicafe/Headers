@class NSString;

@interface AMSUIPaymentSheetTask : AMSPaymentSheetTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (id)presentationSceneIdentifierForPaymentAuthorizationController:(id)a0;
- (id)presentationWindowForPaymentAuthorizationController:(id)a0;

@end
