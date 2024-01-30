@class NSString, UIImageView, ICNote, UILabel, NSLayoutConstraint, UIButton;

@interface ICPasswordEntryViewController : UIViewController

@property (weak, nonatomic) UIImageView *lockImage;
@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UIButton *unlockButton;
@property (weak, nonatomic) UIButton *largeUnlockButton;
@property (weak, nonatomic) NSLayoutConstraint *titleLabelLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *titleLabelTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *titleLabelBaselineConstraint;
@property (weak, nonatomic) NSLayoutConstraint *titleLabelBottomConstraintForAXLargerTextSizes;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) unsigned long long intent;
@property (retain, nonatomic) ICNote *note;
@property (nonatomic) BOOL isAnimatingOut;
@property (copy, nonatomic) id /* block */ passwordEntryCompletionHandler;
@property (copy, nonatomic) id /* block */ passwordEntryFailedAttemptHandler;
@property (nonatomic) unsigned long long mode;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)updateFonts;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (void)applyEntryViewMode;
- (void)updateforAccessibilityDarkerSystemColors;
- (void)updateTitleLabelPreferredMaxLayoutWidth;
- (void)updateConstraintsForContentSizeCategoryIfNecessary;
- (void)unlockPasswordButtonPressed:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 note:(id)a2 intent:(unsigned long long)a3;
- (void)beginAuthentication;

@end
