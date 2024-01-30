@class NSString;
@protocol PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate;

@interface PKRemoteTransactionAuthenticationPasscodeViewController : _UIRemoteViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol>

@property (weak, nonatomic) id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)passcodeViewControllerRequestSessionExchangeTokenWithHandler:(id /* block */)a0;
- (void)passcodeViewControllerDidEndSessionExchange;
- (void)passcodeViewControllerDidCancel;
- (void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)a0;

@end
