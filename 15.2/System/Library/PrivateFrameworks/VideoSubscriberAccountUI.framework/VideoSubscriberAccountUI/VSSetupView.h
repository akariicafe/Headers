@class UIStackView, UIFont, NSString, VSFontCenter, UIImage, UIView, UIButton;
@protocol VSSetupViewDelegate;

@interface VSSetupView : UIView

@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (retain, nonatomic) UIFont *defaultSkipButtonFont;
@property (retain, nonatomic) UIFont *skipButtonFont;
@property (nonatomic) double defaultSkipButtonSpacing;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIButton *beginButton;
@property (retain, nonatomic) UIButton *skipButton;
@property (retain, nonatomic) UIButton *appsButton;
@property (weak, nonatomic) id<VSSetupViewDelegate> delegate;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appAgeRatingBadge;
@property (retain, nonatomic) NSString *footnote;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL shouldShowAppsButton;
@property (nonatomic) BOOL shouldShowAboutButton;
@property (nonatomic) BOOL shouldOverrideSkipButtonStyle;
@property (copy, nonatomic) NSString *beginButtonTitle;
@property (copy, nonatomic) NSString *skipButtonTitle;
@property (copy, nonatomic) NSString *appsButtonTitle;
@property (readonly, nonatomic) UIView *tvProviderPrivacyButtonContainer;
@property (readonly, nonatomic) UIView *tvAppPrivacyButtonContainer;
@property (copy, nonatomic) NSString *footer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_beginButtonPressed:(id)a0;
- (void)_skipButtonPressed:(id)a0;
- (void)_appsButtonPressed:(id)a0;

@end
