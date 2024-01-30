@class SBIconView, UIView, SBHLibraryCategoryStackView;

@interface SBHLibraryPodCrossfadeView : UIView {
    SBHLibraryCategoryStackView *_foregroundView;
    UIView *_backgroundView;
}

@property (readonly, nonatomic) SBIconView *podIconView;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithForegroundView:(id)a0 podIconView:(id)a1;
- (id)initWithBackgroundView:(id)a0 podIconView:(id)a1;
- (void)setPodIconViewCrossfadeFraction:(double)a0;
- (void)setSourceViewCrossfadeFraction:(double)a0;

@end
