@class NSArray, UITraitCollection;
@protocol WFActionDrawerCategoriesMetricsProviderCellDimension;

@interface WFActionDrawerCategoriesMetrics : NSObject

@property (retain, nonatomic) id<WFActionDrawerCategoriesMetricsProviderCellDimension> cellDimensions;
@property (readonly, nonatomic) NSArray *sizesForCells;
@property (readonly, nonatomic) BOOL valid;
@property (nonatomic) BOOL verticalPresentation;
@property (copy, nonatomic) NSArray *categories;
@property (weak, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumSizeCellThatFits;
@property (readonly, nonatomic) double heightForDisplay;

- (void).cxx_destruct;
- (id)initWithCategories:(id)a0;
- (void)recomputeIfNeeded;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cellPadding;
- (struct CGSize { double x0; double x1; })sizeForCellAtIndex:(unsigned long long)a0;
- (BOOL)shouldStackVertically;
- (struct CGSize { double x0; double x1; })cellImageSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textPadding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerEdgeInsets;
- (unsigned long long)numberOfCellsPerRow;
- (struct CGSize { double x0; double x1; })sizeForLabel:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)numberOfRowsRequired;
- (void)loadCellDimensions;
- (void)recompute;
- (void)computeSizesForCells;
- (struct CGSize { double x0; double x1; })computeSizeForCell:(id)a0;
- (void)computeMaximumSizeCellThatFits;
- (void)computeHeightForDisplay;
- (BOOL)isAccessibilityContentSize;
- (BOOL)canFitVertically;

@end
