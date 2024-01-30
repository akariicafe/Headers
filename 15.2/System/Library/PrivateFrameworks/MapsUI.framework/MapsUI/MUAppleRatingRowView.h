@class UILabel;
@protocol MURatingPercentageViewModel;

@interface MUAppleRatingRowView : MKViewWithHairline {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) id<MURatingPercentageViewModel> viewModel;

- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)_setupSubviews;
- (id)_attributesWithFont:(id)a0 color:(id)a1;
- (id)_ratingSubtitleAttributedString;

@end
