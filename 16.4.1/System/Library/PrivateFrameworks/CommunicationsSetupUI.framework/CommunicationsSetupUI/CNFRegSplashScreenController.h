@class UIButton, NSString, CNFRegController, UIBarButtonItem;
@protocol CNFRegFirstRunDelegate;

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience> {
    UIButton *_learnMoreButton;
}

@property (retain, nonatomic) CNFRegController *regController;
@property (nonatomic) id<CNFRegFirstRunDelegate> delegate;
@property (readonly, nonatomic) long long currentAppearanceStyle;
@property (retain, nonatomic) UIBarButtonItem *customLeftButton;
@property (retain, nonatomic) UIBarButtonItem *customRightButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willBecomeActive;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_learnMorePressed:(id)a0;
- (void)_getStartedPressed:(id)a0;
- (long long)currentAppearanceStyle;
- (id)customLeftButton;
- (id)customRightButton;
- (id)initWithRegController:(id)a0 account:(id)a1;
- (void)setCustomLeftButton:(id)a0;
- (void)setCustomRightButton:(id)a0;
- (id)userInteractionColor;

@end
