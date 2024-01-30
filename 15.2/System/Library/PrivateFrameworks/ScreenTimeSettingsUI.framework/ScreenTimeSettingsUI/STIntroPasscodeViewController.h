@class STIntroductionModel, NSString;

@interface STIntroPasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate>

@property (readonly) STIntroductionModel *model;
@property (readonly) BOOL askForRecoveryAppleID;
@property (readonly, copy) NSString *altDSID;
@property (readonly, getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud;
@property (readonly, copy) id /* block */ continueHandler;
@property long long passcodeState;
@property (retain) NSString *initialPasscode;
@property (getter=isNumeric) BOOL numeric;
@property unsigned long long numericLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)passcodeInputView;
- (void)loadView;
- (void).cxx_destruct;
- (void)passcodeInput:(id)a0 enteredPasscode:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)_passcodeView;
- (id)initWithIntroductionModel:(id)a0 askForRecoveryAppleID:(BOOL)a1 altDSID:(id)a2 isChildOrNotSignedIntoiCloud:(BOOL)a3 continueHandler:(id /* block */)a4;
- (void)passcodeTypeChanged:(BOOL)a0;
- (void)userEnteredPasscode:(id)a0;
- (void)_transitionToFirstPasscodePaneWithState:(long long)a0;
- (void)nextButtonTapped;
- (void)updatePasscodeType;

@end
