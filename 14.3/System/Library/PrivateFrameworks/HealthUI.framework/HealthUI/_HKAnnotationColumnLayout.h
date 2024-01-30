@class NSMutableArray;

@interface _HKAnnotationColumnLayout : UIView

@property (nonatomic) long long context;
@property (retain, nonatomic) NSMutableArray *columnViews;
@property (retain, nonatomic) NSMutableArray *separatorViews;
@property (nonatomic) BOOL includeSeparators;

- (id)initWithContext:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_minimumHeight;
- (double)_minimumWidth;
- (void)_invalidateLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_makeSeparatorView;
- (void)addColumnView:(id)a0;
- (void)clearViews;
- (void)_clearSeparatorViews;
- (void)_addSeparatorViews;
- (void)_clearColumnViews;
- (void)_layoutColumnsEqually;
- (void)_layoutColumnsPacked;
- (double)_columnSeparation;
- (void)_layoutColumnsWithWidth:(double)a0 columnSeparation:(double)a1 currentSize:(struct CGSize { double x0; double x1; })a2;
- (double)_minimumWidthForPackedLayout;
- (double)_minimumWithForEqualLayout;
- (double)_largestColumnWidth;
- (double)_totalColumnWidth;

@end
