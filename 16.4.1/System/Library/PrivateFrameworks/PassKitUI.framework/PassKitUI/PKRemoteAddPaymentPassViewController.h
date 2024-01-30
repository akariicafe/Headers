@class NSString;
@protocol PKAddPaymentPassViewControllerDelegate;

@interface PKRemoteAddPaymentPassViewController : _UIRemoteViewController <PKRemoteAddPassViewControllerProtocol> {
    BOOL _finished;
}

@property (weak, nonatomic) id<PKAddPaymentPassViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)_addPaymentPassVC;
- (void)didFinishWithPass:(id)a0 error:(id)a1;
- (void)generateRequestWithCertificateChain:(id)a0 nonce:(id)a1 nonceSignature:(id)a2 completionHandler:(id /* block */)a3;

@end
