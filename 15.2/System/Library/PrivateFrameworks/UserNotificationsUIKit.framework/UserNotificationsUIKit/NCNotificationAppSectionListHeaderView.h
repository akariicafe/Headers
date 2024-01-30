@class NSString, UIImageView, UIImage, UILabel, NCNotificationAppSectionListHeaderOptionsButton;
@protocol NCNotificationAppSectionListHeaderViewDelegate;

@interface NCNotificationAppSectionListHeaderView : NCNotificationListBaseContentView {
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    NCNotificationAppSectionListHeaderOptionsButton *_optionsButton;
}

@property (weak, nonatomic) id<NCNotificationAppSectionListHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;

- (void)_layoutTitleLabel;
- (void)layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)_updateTextAttributes;
- (unsigned long long)_numberOfLinesForTitleTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_maximumNumberOfLinesForTitleText;
- (void)_updateTextAttributesForTitleTextLabel;
- (void)_configureOptionsButtonIfNecessary;
- (void)_layoutIconImageView;
- (void)_layoutOptionsButton;
- (void)didTapOptionsButton:(id)a0;

@end
