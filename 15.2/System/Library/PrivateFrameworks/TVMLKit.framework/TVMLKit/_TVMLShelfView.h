@class NSString;

@interface _TVMLShelfView : _TVShelfView <TVRowHosting_Collection> {
    double _showcaseFactor;
}

@property (readonly, nonatomic) BOOL shouldBindRowsTogether;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)tv_setShowcaseFactor:(double)a0;
- (id)rowMetricsForExpectedWidth:(double)a0 firstItemRowIndex:(long long *)a1;
- (id)showcaseRowMetricsForExpectedWidth:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shelfViewLayout:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 _shelfViewLayout:(id)a1;
- (id)rowMetricsForExpectedWidth:(double)a0 withContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 firstItemRowIndex:(long long *)a2;
- (id)_rowMetricsForExpectedWidth:(double)a0 withContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 firstItemRowIndex:(long long *)a2 forShowcase:(BOOL)a3;
- (id)showcaseRowMetricsForExpectedWidth:(double)a0 withContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_selectionMarginsForCell:(id)a0;

@end
