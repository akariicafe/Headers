@class OBLinkTrayButton, NSString, OBTrayButton, NSArray, NSDictionary, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomePersonalIdentityDeviceLanguageSetupViewController : OBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSString *targetLanguage;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (retain, nonatomic) NSArray *supportedVoiceRecognitionLanguages;
@property (retain, nonatomic) NSDictionary *languageToHomePodsMapping;
@property (retain, nonatomic) NSString *overrideTargetLanguage;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (void)_cancelLanguageSetup;
- (void)_completeLanguageSetup;
- (void)_changeSiriLanguage;

@end
