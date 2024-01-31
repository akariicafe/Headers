@class CNGeminiResult, CNGeminiBadge, NSArray, UIImageView, NSDictionary, UILayoutGuide, UILabel, UIColor;

@interface CNContactGeminiView : UIButton

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
@property (retain, nonatomic) UIColor *highlightedColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSDictionary *ab_textAttributes;

+ (BOOL)requiresConstraintBasedLayout;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_hasBaseline;
- (id)localizedLabelFromGeminiResult:(id)a0;
- (void)calculateLayoutIfNeeded;
- (BOOL)doesLayoutRequireTwoLines;
- (id)geminiViewChevronImage;
- (id)localizedChannelUsageFromGeminiResult:(id)a0;
- (void)setNeedsCalculateLayout;
- (BOOL)shouldDisplayBadge;
- (BOOL)shouldDisplayChevron;
- (id)singleLineLayoutConstraints;
- (struct CGSize { double x0; double x1; })sizeForSingleLineLayoutFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForTwoLineLayoutFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)twoLineLayoutConstraints;

@end
