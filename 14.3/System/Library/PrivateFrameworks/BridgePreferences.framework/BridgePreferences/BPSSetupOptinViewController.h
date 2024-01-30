@class NSString, BPSWatchView, UIScrollView, UILabel, UIButton;

@interface BPSSetupOptinViewController : BPSSetupPageViewController <BPSBuddyController>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailTextTitleLabel;
@property (retain, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) BPSWatchView *watchView;
@property (retain, nonatomic) UIButton *suggestedChoiceButton;
@property (retain, nonatomic) UIButton *alternateChoiceButton;
@property (retain, nonatomic) UIButton *learnMoreButton;
@property (retain, nonatomic) UIButton *okayButton;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageResource;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)alternateButtonTitle;
- (id)detailString;
- (void)viewDidLoad;
- (id)learnMoreButtonTitle;
- (BOOL)wantsLightenBlendedScreen;
- (id)suggestedButtonTitle;
- (void)applyConfirmedOptin:(BOOL)a0;
- (id)imageResourceBundleIdentifier;
- (void)suggestedButtonPressed:(id)a0;
- (void)alternateButtonPressed:(id)a0;
- (BOOL)wantsAlternateChoicePillButton;
- (BOOL)wantsAlternateChoiceSystemButton;
- (BOOL)wantsSuggestedChoicePillButton;
- (BOOL)wantsLearnMoreButton;
- (BOOL)wantsOkayPillButton;
- (id)detailTitleString;
- (id)detailAtrributedString;
- (BOOL)wantsToShowWatchHW;
- (id)okayButtonTitle;
- (double)sidePadding;
- (void)okayButtonPressed:(id)a0;
- (void)learnMoreButtonPressed:(id)a0;
- (double)noHWImageOffset;
- (double)noHWDetailOffset;
- (double)alternateButtonDetailTextPaddingWithImage;
- (double)suggestedChoicePillDetailTextLabelVerticalOffset;
- (double)imageDetailPadding;
- (double)okayButtonTopPadding;
- (id)optinLocalizationBundle;
- (id)optinLocalizationStringsFile;
- (void)_madeOptinChoice:(BOOL)a0 withAlertController:(id)a1;
- (void)showOptinConfirmationAlert:(id)a0 optinChoice:(BOOL)a1;

@end
