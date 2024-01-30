@class UIButton, UIScrollView, UILabel, UIView;

@interface FAExplainAppleIDViewController : UIViewController {
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_goToSettingsButton;
}

@property (nonatomic) BOOL shouldShowInviteeInstructions;

- (void)_updateFonts;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (double)_heightForText:(id)a0 constrainedToWidth:(double)a1;

@end
