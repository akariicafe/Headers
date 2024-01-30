@class NSArray, VUILabel, SLAttributionView, UIView, VUISeparatorView;

@interface VUISportsProductBannerView : VUIBaseView

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) NSArray *rowLabels;
@property (retain, nonatomic) NSArray *scoreLabels;
@property (retain, nonatomic) NSArray *descriptionLabels;
@property (retain, nonatomic) VUILabel *footerLabel;
@property (retain, nonatomic) NSArray *buttonViews;
@property (retain, nonatomic) SLAttributionView *attributionView;
@property (retain, nonatomic) VUILabel *availabilityTextView;
@property (retain, nonatomic) UIView *availabilityImageView;
@property (nonatomic) double availabilityImageViewLeftMargin;

+ (BOOL)shouldDisplayScoresBelowLabelsForWindowWidth:(double)a0;
+ (BOOL)shouldUseVerticalLayoutForWindowWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_availabilityImageSizeWithSize:(struct CGSize { double x0; double x1; })a0;
- (double)_availabilityImageViewLeftMargin;
- (struct CGSize { double x0; double x1; })_iOS_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)_layoutButtonsWithOrigin:(struct CGPoint { double x0; double x1; })a0 buttonHeight:(double)a1 buttonWidth:(double)a2 spacing:(double)a3;
- (void)_layoutLabels:(id)a0 scoreLabels:(id)a1 withOrigin:(struct CGPoint { double x0; double x1; })a2 maxWidth:(double)a3;
- (void)_layoutLabels:(id)a0 withOrigin:(struct CGPoint { double x0; double x1; })a1 maxWidth:(double)a2;
- (void)_layoutScoresWithOrigin:(struct CGPoint { double x0; double x1; })a0 availableWidth:(double)a1 padding:(double)a2;
- (double)_maxScoreWidthForColumn:(unsigned long long)a0 availableWidth:(double)a1;
- (double)_totalMaxScoreWidthWithAvailableWidth:(double)a0;

@end
