@class HMHome, NSString, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUCameraRecordingSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *setupButton;
@property (retain, nonatomic) OBTrayButton *learnMoreButton;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)hu_preloadContent;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 itemTableViewController:(id)a3 home:(id)a4;
- (void)_setupCameraRecording:(id)a0;
- (void)showCameraRecordingLearnMore;

@end
