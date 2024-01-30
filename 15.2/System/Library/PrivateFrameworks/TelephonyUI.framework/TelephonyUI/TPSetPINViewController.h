@class UIView, NSString, UILabel, TPPasscodeView, TPSimpleNumberPad;
@protocol TPSetPINViewControllerDelegate;

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate>

@property int initialState;
@property (nonatomic) int state;
@property unsigned int minPINLength;
@property unsigned int maxPINLength;
@property BOOL confirmPIN;
@property (retain) UILabel *statusLabel;
@property (retain) TPPasscodeView *passcodeView;
@property (retain) TPSimpleNumberPad *numberPad;
@property (retain) NSString *oldPIN;
@property (retain) NSString *unconfirmedPIN;
@property id<TPSetPINViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *promptTextForOldPIN;
@property (retain, nonatomic) NSString *promptTextForNewPIN;
@property (retain, nonatomic) NSString *promptTextForConfirmingNewPIN;
@property (retain, nonatomic) NSString *promptTextForSavingPIN;
@property (retain) UIView *customBackgroundView;

- (BOOL)wantsFullScreenLayout;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_cancelButtonTapped;
- (void)_updateStatusLabel;
- (void)_doneButtonTapped;
- (id)_initForMinLength:(unsigned int)a0 maxLength:(unsigned int)a1 confirmPIN:(BOOL)a2;
- (double)numberPadTopConstraintConstant;
- (void)_updateUIForStateChange;
- (void)resetWithErrorPrompt:(id)a0 title:(id)a1;
- (void)_updateDeleteAllowed;
- (void)_updateNavBarButtons;
- (void)simpleNumberPad:(id)a0 buttonPressedWithCharacter:(id)a1;
- (void)simpleNumberPadDeletePressed:(id)a0;
- (id)initForNewPINWithMinLength:(unsigned int)a0 maxLength:(unsigned int)a1 confirmPIN:(BOOL)a2;
- (id)initForChangePINWithMinLength:(unsigned int)a0 maxLength:(unsigned int)a1 confirmPIN:(BOOL)a2;
- (void)resetWithErrorPrompt:(id)a0;

@end
