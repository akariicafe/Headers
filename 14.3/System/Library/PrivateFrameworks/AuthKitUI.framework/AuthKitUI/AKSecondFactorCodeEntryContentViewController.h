@class NSArray, NSString, AKAppleIDAuthenticationContext, AKBasicLoginContentViewController, AKCodeEntryView;

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <CAAnimationDelegate, AKSecondFactorCodeEntry>

@property (retain, nonatomic) AKCodeEntryView *codeGeneratorView;
@property (retain, nonatomic) AKBasicLoginContentViewController *titleHeaderViewController;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSString *generatedCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)setPasscodeFieldDisabled:(BOOL)a0;
- (void)_configureTitleHeaderView;
- (void)_configureCodeGenView;
- (void)_updateFontContstraints:(id)a0;
- (void)jiggleAView;
- (void)clearSecondFactorEntry;

@end
