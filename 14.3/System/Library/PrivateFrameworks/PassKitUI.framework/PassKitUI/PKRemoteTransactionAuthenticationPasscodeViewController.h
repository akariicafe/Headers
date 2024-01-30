@class NSString;
@protocol PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate;

@interface PKRemoteTransactionAuthenticationPasscodeViewController : _UIRemoteViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol>

@property (weak, nonatomic) id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)passcodeViewControllerDidCancel;
- (void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;

@end
