@class OBLinkTrayButton, OBTrayButton, NSString, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUCameraRecordingIntroViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>

@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *setupButton;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton;
@property (retain, nonatomic) NSString *continueButtonText;
@property (retain, nonatomic) NSString *notNowButtonText;
@property (retain, nonatomic) NSString *captionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_buttonOne:(id)a0;
- (void)_buttonTwo:(id)a0;
- (id)hu_preloadContent;
- (id)initWithIntroVariant:(unsigned long long)a0 home:(id)a1;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentImage:(id)a3;
- (Class)onboardingFlowClass;
- (void)showCameraRecordingLearnMore;

@end
