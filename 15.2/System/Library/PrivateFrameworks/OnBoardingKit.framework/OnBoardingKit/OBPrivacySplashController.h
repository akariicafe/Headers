@class UIColor, NSString, OBPrivacyFlow, UILabel, UIButton;

@interface OBPrivacySplashController : OBWelcomeController {
    OBPrivacyFlow *_flow;
}

@property (retain) UIButton *linkToPrivacyGatewayButton;
@property (retain) UILabel *privacyGatewayDescription;
@property (retain) UILabel *linkToPrivacyGateway;
@property (retain) UIButton *unifiedAboutButton;
@property (copy) id /* block */ defaultButtonHandler;
@property (retain, nonatomic) UIColor *customTintColor;
@property (nonatomic) BOOL underlineLinks;
@property BOOL suppressPerPageAnalyticsLogging;
@property BOOL allowsOpeningSafari;
@property (nonatomic) BOOL showLinkToPrivacyGateway;
@property BOOL showsLinkToUnifiedAbout;
@property BOOL forceLargeMargins;
@property (retain) NSString *displayLanguage;
@property unsigned long long displayDeviceType;
@property BOOL useModalStyle;
@property (nonatomic) BOOL isCombined;

+ (id)splashPageWithBundleIdentifier:(id)a0;

- (void)viewDidLoad;
- (id)_defaultButtonTitle;
- (void)updateFontForPrivacyGateway;
- (void)updateFontForUnifiedAboutButton;
- (void)defaultButtonPressed:(id)a0;
- (void)setDismissHandlerForDefaultButton:(id /* block */)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFlow:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_initializeFromBundle;
- (void)showPrivacyGateway:(id)a0;
- (void)showUnifiedAbout:(id)a0;
- (id)initWithPrivacyIdentifier:(id)a0;

@end
