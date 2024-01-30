@class NSMutableArray;

@interface _HKAnnotationColumnLayout : UIView

@property (nonatomic) long long context;
@property (retain, nonatomic) NSMutableArray *columnViews;
@property (retain, nonatomic) NSMutableArray *separatorViews;
@property (nonatomic) BOOL includeSeparators;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_invalidateLayout;
- (id)initWithContext:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_minimumWidth;
- (void).cxx_destruct;
- (double)_minimumHeight;
- (void)addColumnView:(id)a0;
- (void)clearViews;
- (void)_clearSeparatorViews;
- (void)_addSeparatorViews;
- (id)_makeSeparatorView;
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
