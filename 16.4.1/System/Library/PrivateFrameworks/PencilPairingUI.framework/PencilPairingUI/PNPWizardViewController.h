@class PKTextInputSettings, UIColor, NSString;
@protocol PNPWizardViewDelegate;

@interface PNPWizardViewController : UINavigationController <PNPWelcomeControllerDelegate>

@property (nonatomic) BOOL showingWhatsNew;
@property (nonatomic) long long deviceType;
@property (retain, nonatomic) PKTextInputSettings *textInputSettings;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (weak, nonatomic) id<PNPWizardViewDelegate> wizardDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredContentSize;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)prepareForPresentation;
- (void).cxx_destruct;
- (void)welcomeControllerButtonDidPress:(id)a0;
- (id)welcomeControllerWithType:(long long)a0 buttonType:(long long)a1 deviceType:(long long)a2;

@end
