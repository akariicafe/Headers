@class UIColor, NSArray, NSString, OBBundle, OBPrivacyFlow;

@interface OBPrivacyLinkController : UIViewController {
    NSArray *_bundles;
    NSArray *_bundleIdentifiers;
    BOOL _didOverrideShowUnifiedAbout;
}

@property (retain, nonatomic) UIColor *customTintColor;
@property (nonatomic) BOOL underlineLinks;
@property (nonatomic) BOOL presentedViewControllerShouldUseDarkMode;
@property (readonly) OBBundle *bundle;
@property (readonly) NSArray *bundles;
@property (readonly) OBPrivacyFlow *flow;
@property BOOL displayIcon;
@property BOOL displayLargeIcon;
@property BOOL displayCaptionText;
@property (retain) NSString *displayLanguage;
@property unsigned long long displayDeviceType;
@property BOOL allowsOpeningSafari;
@property (nonatomic) BOOL showsLinkToUnifiedAbout;

+ (Class)_platformSpecificClass;
+ (id)linkWithBundleAtPath:(id)a0;
+ (id)linkWithBundleIdentifier:(id)a0;
+ (id)linkWithBundleIdentifiers:(id)a0;

- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithPrivacyBundle:(id)a0;
- (id)initWithBundleIdentifiers:(id)a0;
- (void)linkPressed;
- (void)setLinkEnabled:(BOOL)a0;

@end
