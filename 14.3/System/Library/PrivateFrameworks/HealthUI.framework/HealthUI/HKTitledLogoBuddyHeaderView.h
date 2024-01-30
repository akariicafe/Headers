@class UIImage, UIImageView, NSLayoutConstraint;

@interface HKTitledLogoBuddyHeaderView : HKTitledBuddyHeaderView {
    UIImageView *_logoImageView;
    NSLayoutConstraint *_titleLabelFirstBaselineAnchor;
}

@property (retain, nonatomic) UIImage *logoImage;

- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (id)logoImageView;
- (double)bottomPadding;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithTopInset:(double)a0 linkButtonTitle:(id)a1;

@end
