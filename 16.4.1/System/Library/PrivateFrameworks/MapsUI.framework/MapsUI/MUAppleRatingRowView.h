@class UILabel, MUAppleRatingRowSubtitleView, MUStackLayout;
@protocol MURatingPercentageViewModel;

@interface MUAppleRatingRowView : MKViewWithHairline {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MUStackLayout *_stackLayout;
    MUAppleRatingRowSubtitleView *_subtitleView;
    BOOL _ratingsCountAnimationEnabled;
}

@property (retain, nonatomic) id<MURatingPercentageViewModel> viewModel;

+ (id)_numberOfPeopleMonospacedFont;
+ (long long)_ratingsValueAnimationFromViewModel:(id)a0 toViewModel:(id)a1;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (id)_ratingSubtitleAttributedString;
- (id)_attributesWithFont:(id)a0 color:(id)a1;
- (id)_percentageStringComponentsFromCurrentViewModel;
- (void)_updateAppearanceAnimatingFromPreviousViewModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ratingsCountAnimationEnabled:(BOOL)a1;

@end
