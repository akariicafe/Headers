@class UIImage, UIImageView, NSLayoutConstraint;

@interface HKTitledLogoBuddyHeaderView : HKTitledBuddyHeaderView {
    UIImageView *_logoImageView;
    NSLayoutConstraint *_titleLabelFirstBaselineAnchor;
}

@property (retain, nonatomic) UIImage *logoImage;

- (void)_updateForCurrentSizeCategory;
- (double)bottomPadding;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)logoImageView;
- (id)initWithTopInset:(double)a0 linkButtonTitle:(id)a1;

@end
