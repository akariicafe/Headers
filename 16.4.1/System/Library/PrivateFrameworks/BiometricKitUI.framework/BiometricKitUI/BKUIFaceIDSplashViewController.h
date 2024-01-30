@class OBAnimationController, BKDevice, OBTrayButton;

@interface BKUIFaceIDSplashViewController : OBWelcomeController

@property (nonatomic) BOOL inBuddy;
@property (retain, nonatomic) OBTrayButton *skipButton;
@property (copy, nonatomic) id /* block */ endEnrollActionPrimary;
@property (copy, nonatomic) id /* block */ endEnrollActionSecondary;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) BKDevice *device;
@property (nonatomic) BOOL isDemo;
@property (retain, nonatomic) OBAnimationController *animationController;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_didSelectEnroll;
- (void)_didSelectSkip;
- (id)initInBuddy:(BOOL)a0 isDemo:(BOOL)a1 bkDevice:(id)a2 withEndEnrollmentActionPrimary:(id /* block */)a3 enrollmentActionSecondary:(id /* block */)a4;

@end
