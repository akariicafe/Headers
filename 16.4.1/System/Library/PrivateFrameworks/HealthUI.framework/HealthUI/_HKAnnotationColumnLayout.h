@class NSMutableArray;

@interface _HKAnnotationColumnLayout : UIView

@property (nonatomic) long long context;
@property (retain, nonatomic) NSMutableArray *columnViews;
@property (retain, nonatomic) NSMutableArray *separatorViews;
@property (nonatomic) BOOL includeSeparators;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithContext:(long long)a0;
- (void)_invalidateLayout;
- (void).cxx_destruct;
- (double)_minimumHeight;
- (double)_minimumWidth;
- (void)_addSeparatorViews;
- (void)_clearColumnViews;
- (void)_clearSeparatorViews;
- (double)_columnSeparation;
- (double)_largestColumnWidth;
- (void)_layoutColumnsEqually;
- (void)_layoutColumnsPacked;
- (void)_layoutColumnsWithWidth:(double)a0 columnSeparation:(double)a1 currentSize:(struct CGSize { double x0; double x1; })a2;
- (id)_makeSeparatorView;
- (double)_minimumWidthForPackedLayout;
- (double)_minimumWithForEqualLayout;
- (double)_totalColumnWidth;
- (void)addColumnView:(id)a0;
- (void)clearViews;
- (void)clearViewsFromIndex:(unsigned long long)a0;
- (void)setColumnView:(id)a0 atIndex:(unsigned long long)a1;

@end
