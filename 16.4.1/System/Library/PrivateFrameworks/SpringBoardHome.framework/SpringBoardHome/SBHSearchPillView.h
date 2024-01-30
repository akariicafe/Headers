@class UIImageView, UILabel, UIView, _UILegibilitySettings;

@interface SBHSearchPillView : UIView <SBHSearchAffordance>

@property (readonly, nonatomic) UILabel *searchLabel;
@property (readonly, nonatomic) UIImageView *searchGlyphImageView;
@property (readonly, nonatomic) UIView *contentContainerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clientReferenceFrame;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) long long labelAlignment;
@property (retain, nonatomic) UIView *searchAffordanceReferenceView;
@property (weak, nonatomic) UIView *searchAffordanceReferenceContainerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } searchAffordanceReferenceFrame;
@property (nonatomic) BOOL appliesSearchAffordanceCornerRadius;
@property (nonatomic) double searchAffordanceCornerRadius;
@property (readonly, nonatomic) UIView *searchAffordanceBackgroundView;
@property (readonly, nonatomic) UIView *searchAffordanceContentView;
@property (nonatomic) long long searchAffordanceContentAlignment;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

+ (id)searchPillViewWithSystemDefaultBackground;

- (double)halfFloatRoundForScale:(double)a0 scale:(double)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
