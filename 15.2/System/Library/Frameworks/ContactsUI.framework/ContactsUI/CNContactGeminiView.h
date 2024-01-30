@class CNGeminiResult, CNGeminiBadge, NSArray, UIImageView, NSDictionary, UILayoutGuide, UILabel, UIColor;

@interface CNContactGeminiView : UIView

@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) UILayoutGuide *geminiLabelLayoutGuide;
@property (retain, nonatomic) CNGeminiBadge *geminiBadge;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *geminiLabel;
@property (retain, nonatomic) UIImageView *chevronView;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (nonatomic) BOOL didCalculateLayout;
@property (nonatomic) BOOL isUsingTwoLineLayout;
@property (nonatomic) BOOL allowsPickerActions;
@property (retain, nonatomic) CNGeminiResult *geminiResult;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIColor *highlightedColor;
@property (copy, nonatomic) NSDictionary *ab_textAttributes;

+ (BOOL)requiresConstraintBasedLayout;

- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)_hasBaseline;
- (struct CGSize { double x0; double x1; })sizeForSingleLineLayoutFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForTwoLineLayoutFittingSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldDisplayBadge;
- (BOOL)shouldDisplayChevron;
- (void)setNeedsCalculateLayout;
- (void)calculateLayoutIfNeeded;
- (BOOL)doesLayoutRequireTwoLines;
- (id)singleLineLayoutConstraints;
- (id)twoLineLayoutConstraints;
- (id)localizedChannelUsageFromGeminiResult:(id)a0;
- (id)localizedLabelFromGeminiResult:(id)a0;

@end
