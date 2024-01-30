@class UIFont, NSString, UIFontMetrics, NSArray, NSMutableArray, UITraitCollection;

@interface AXAssistiveTouchLayoutView : UIView

@property (class, readonly, nonatomic) UIFontMetrics *fontMetrics;
@property (class, readonly, nonatomic) NSString *labelMinimumContentSizeCategory;
@property (class, readonly, nonatomic) NSString *labelMaximumContentSizeCategory;
@property (class, readonly, nonatomic) NSString *imageMinimumContentSizeCategory;
@property (class, readonly, nonatomic) NSString *imageMaximumContentSizeCategory;
@property (class, readonly, nonatomic) UITraitCollection *traitCollectionForLabelPreferredContentSizeCategory;
@property (class, readonly, nonatomic) UITraitCollection *traitCollectionForImagePreferredContentSizeCategory;
@property (class, readonly, nonatomic) UIFont *labelFont;
@property (class, readonly, nonatomic) double defaultSideLength;
@property (class, readonly, nonatomic) double minimumOuterPadding;

@property (retain, nonatomic) NSArray *itemConstraints;
@property (retain, nonatomic) NSMutableArray *positioningLayoutGuides;

+ (id)_imageMaximumContentSizeCategoryIndependentOfLabel;
+ (double)_layoutViewSideLengthScaledFromDefaultLength:(double)a0 labelContentSizeCategory:(id)a1;
+ (id)_preferredContentSizeCategoryCappedByMinimumContentSizeCategory:(id)a0 maximumContentSizeCategory:(id)a1;
+ (id)_traitCollectionForMinimumContentSizeCategory:(id)a0 maximumContentSizeCategory:(id)a1;
+ (double)layoutViewSideLengthScaledFromDefaultLength:(double)a0;

- (void).cxx_destruct;
- (void)_enableAutoLayoutForAllItems:(id)a0;
- (void)_enumerateListsOfLocations:(id)a0 items:(id)a1 withBlock:(id /* block */)a2;
- (id)_setUpConstraintsForPreferredPositionsForItems:(id)a0 positions:(id)a1;
- (id)_setUpConstraintsToAlignItems:(id)a0 rows:(id)a1 columns:(id)a2;
- (id)_setUpConstraintsToAvoidCollisions:(id)a0 rows:(id)a1 columns:(id)a2 clockwiseOctagonalLocations:(id)a3;
- (void)centerItems:(id)a0;
- (void)centerItems:(id)a0 withView:(id)a1;
- (void)layoutItemsByLocation:(id)a0 hasBackButton:(BOOL)a1;
- (void)layoutItemsByLocation:(id)a0 positions:(id)a1 rows:(id)a2 columns:(id)a3 clockwiseOctagonalLocations:(id)a4 horizontallyCenteredLocation:(id)a5;

@end
