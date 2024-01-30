@class CDPRemoteValidationEscapeOffer, NSString, CDPDevice, CDPRemoteDeviceSecretValidator, NSNumber;
@protocol CDPRemoteSecretEntryDelegate;

@interface CDPRemoteSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {
    BOOL _hasNumericSecret;
    NSNumber *_numericSecretLength;
    CDPDevice *_remoteRecoveryDevice;
    long long _remainingAttempts;
    id<CDPRemoteSecretEntryDelegate> _delegate;
    unsigned long long _validationState;
}

@property (readonly, nonatomic) CDPRemoteDeviceSecretValidator *validator;
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPane:(id)a0;
- (void).cxx_destruct;
- (BOOL)simplePIN;
- (id)initWithValidator:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)useProgressiveDelays;
- (void)didAcceptEnteredPIN:(id)a0;
- (BOOL)pinIsAcceptable:(id)a0 outError:(id *)a1;
- (id)pinInstructionsPrompt;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didCancelEnteringPIN;
- (BOOL)validatePIN:(id)a0;
- (id)title;
- (id)initWithIsNumeric:(BOOL)a0 numericLength:(id)a1 validator:(id)a2 delegate:(id)a3;
- (id)initWithDevice:(id)a0 validator:(id)a1 delegate:(id)a2;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (void)showIncorrectRemoteSecretAlertForPasscode:(id)a0 withRecoveryError:(id)a1 completion:(id /* block */)a2;
- (void)didEnterValidRemoteSecret:(id)a0;

@end
