@interface DBIconListView : SBIconListView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;

+ (unsigned long long)iconRowsForScreenHeight:(double)a0 iconImageSize:(struct CGSize { double x0; double x1; })a1 statusBarEdge:(unsigned long long)a2 interactionAffordances:(unsigned long long)a3;
+ (unsigned long long)iconColumnsForScreenWidth:(double)a0 iconImageSize:(struct CGSize { double x0; double x1; })a1 statusBarEdge:(unsigned long long)a2;

- (Class)baseIconViewClass;
- (struct CGSize { double x0; double x1; })alignmentIconSize;
- (BOOL)adaptsOrientationToTraitCollection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutInsetsForOrientation:(long long)a0;
- (void)layoutSubviews;
- (BOOL)automaticallyAdjustsLayoutMetricsToFit;
- (BOOL)usesAlternateLayout;

@end
