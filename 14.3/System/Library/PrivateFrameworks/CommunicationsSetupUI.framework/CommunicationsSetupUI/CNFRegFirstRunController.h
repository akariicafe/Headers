@class NSString, IMAccount, NSTimer, UIBarButtonItem;
@protocol CNFRegFirstRunDelegate;

@interface CNFRegFirstRunController : CNFRegListController <CNFRegFirstRunExperience> {
    BOOL _showingActivityIndicator;
    NSTimer *_timeoutTimer;
    BOOL _cancelled;
}

@property (retain, nonatomic) UIBarButtonItem *previousLeftButton;
@property (retain, nonatomic) UIBarButtonItem *previousRightButton;
@property (nonatomic) BOOL previousHidesBackButton;
@property (nonatomic) BOOL timedOut;
@property (retain, nonatomic) IMAccount *account;
@property (nonatomic) Class completionControllerClass;
@property (retain, nonatomic) UIBarButtonItem *customLeftButton;
@property (retain, nonatomic) UIBarButtonItem *customRightButton;
@property (nonatomic) id<CNFRegFirstRunDelegate> delegate;
@property (readonly, nonatomic) long long currentAppearanceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)systemApplicationWillEnterForeground;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)customTitle;
- (void)_updateUI;
- (void)_handleTimeout;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)systemApplicationDidEnterBackground;
- (BOOL)_hidesBackButton;
- (id)titleString;
- (void)setCellsChecked:(BOOL)a0;
- (id)validationString;
- (id)initWithRegController:(id)a0;
- (void)_setupEventHandlers;
- (void)_stopValidationModeAnimated:(BOOL)a0;
- (id)initWithRegController:(id)a0 account:(id)a1;
- (void)_stopTimeout;
- (void)_timeoutFired:(id)a0;
- (void)_startTimeoutWithDuration:(double)a0;
- (BOOL)dismissWithState:(unsigned long long)a0;
- (void)_refreshNavBarAnimated:(BOOL)a0;
- (void)_handleReturnKeyTapped:(id)a0;
- (void)_returnKeyPressed;
- (void)_refreshCurrentState;
- (void)_startListeningForReturnKey;
- (void)_stopListeningForReturnKey;
- (id)_leftButtonItem;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (void)_handleValidationModeCancelled;
- (void)_leftButtonTapped;
- (void)_cancelValidationMode;
- (id)_validationModeCancelButton;
- (void)_startActivityIndicatorWithTitle:(id)a0 animated:(BOOL)a1 allowCancel:(BOOL)a2;
- (void)_stopActivityIndicatorWithTitle:(id)a0 animated:(BOOL)a1;
- (void)_startValidationModeAnimated:(BOOL)a0 allowCancel:(BOOL)a1;
- (void)_stopActivityIndicatorAnimated:(BOOL)a0;
- (BOOL)pushCompletionControllerIfPossible;
- (void)_updateControllerState;
- (id)initWithParentController:(id)a0 account:(id)a1;
- (void)_startActivityIndicatorWithTitle:(id)a0 animated:(BOOL)a1;
- (void)_startValidationModeAnimated:(BOOL)a0;
- (void)_executeDismissBlock:(id /* block */)a0;

@end
