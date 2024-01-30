@class OBPrivacySplashController, NSArray, OBPrivacyCombinedController, NSString, UIColor, UIViewController;

@interface OBPrivacyPresenter : NSObject <UIAdaptivePresentationControllerDelegate>

@property (retain) OBPrivacySplashController *splashController;
@property (retain) OBPrivacyCombinedController *combinedController;
@property (retain) UIViewController *presentedController;
@property (retain) NSArray *presentedIdentifiers;
@property (copy) id /* block */ presentationCompletionHandler;
@property (nonatomic) BOOL animatePresentAndDismiss;
@property (copy) id /* block */ dismissHandler;
@property (retain, nonatomic) NSString *displayLanguage;
@property (weak) UIViewController *presentingViewController;
@property (retain, nonatomic) UIColor *customTintColor;
@property (nonatomic) BOOL underlineLinks;
@property (nonatomic) BOOL darkMode;
@property (nonatomic) BOOL usesFullScreenPresentation;
@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presenterForPrivacySplashWithIdentifier:(id)a0;
+ (id)presenterForPrivacySplashWithIdentifer:(id)a0;
+ (id)presenterForPrivacyUnifiedAbout;
+ (id)presenterForPrivacySplashWithBundle:(id)a0;
+ (id)presenterForPrivacySplashWithBundleAtPath:(id)a0;
+ (id)presenterForPrivacyUnifiedAboutWithBundles:(id)a0;
+ (id)presenterForPrivacyUnifiedAboutWithBundlesAtPaths:(id)a0;
+ (id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)a0;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)dismiss;
- (void)present;
- (void).cxx_destruct;
- (void)_presenterDidDismiss;
- (void)presentInNavigationStack:(id)a0;
- (void)presentInNavigationStack:(id)a0 animated:(BOOL)a1;

@end
