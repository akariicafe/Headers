@interface WFActionDrawerCategoriesHorizontalCellDimensions : NSObject <WFActionDrawerCategoriesMetricsProviderCellDimension>

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cellPadding;
- (struct CGSize { double x0; double x1; })cellImageSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textPadding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerEdgeInsets;
- (unsigned long long)numberOfCellsPerRow;
- (struct CGSize { double x0; double x1; })sizeForCell:(id)a0 usingMetrics:(id)a1;

@end
