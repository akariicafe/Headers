@class NSString;

@interface PKRemotePaymentSetupViewController : _UIRemoteViewController <PKRemotePaymentSetupViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)paymentSetupDidFinish;

@end
