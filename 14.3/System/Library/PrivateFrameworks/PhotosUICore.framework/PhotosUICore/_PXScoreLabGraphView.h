@class NSPredicate, NSArray, NSObject;
@protocol OS_dispatch_queue, _PXScoreLabGraphViewDelegate;

@interface _PXScoreLabGraphView : UIView {
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    double _graphWidth;
    double _graphHeight;
    double _minXValue;
    double _maxXValue;
    double _minYValue;
    double _maxYValue;
    double _baseMinXValue;
    double _baseMaxXValue;
    double _baseMinYValue;
    double _baseMaxYValue;
    double _minXValueAtBeginningOfGesture;
    double _maxXValueAtBeginningOfGesture;
    double _minYValueAtBeginningOfGesture;
    double _maxYValueAtBeginningOfGesture;
    struct CGPoint { double x; double y; } _locationAtBeginningOfGesture;
    NSArray *_allXValues;
    NSArray *_allYValues;
    double _Ex;
    double _Ex2;
    double _Ey;
    double _Ey2;
    double _Exy;
    unsigned long long _numberOfIgnoredAssets;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (copy) id /* block */ xScoreValueGetter;
@property (copy) id /* block */ yScoreValueGetter;
@property unsigned long long graphType;
@property (retain) NSPredicate *assetPredicate;
@property (weak) id<_PXScoreLabGraphViewDelegate> delegate;

- (void)reloadData;
- (void).cxx_destruct;
- (void)pinched:(id)a0;
- (void)enumerateAssetsUsingBlock:(id /* block */)a0;
- (void)panned:(id)a0;
- (void)startGestureAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelGesture;
- (void)updateGestureWithLocation:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1;
- (void)loadDistributionData;
- (void)loadCorrelationData;
- (void)drawAxisInContext:(struct CGContext { } *)a0 minXValue:(double)a1 maxXValue:(double)a2 minYValue:(double)a3 maxYValue:(double)a4;
- (void)drawXMean:(double)a0 andStddev:(double)a1 inContext:(struct CGContext { } *)a2;
- (void)drawYMean:(double)a0 andStddev:(double)a1 inContext:(struct CGContext { } *)a2;
- (void)drawTextPanelWithNumberOfAssets:(long long)a0 numberOfIgnoredAssets:(unsigned long long)a1 rho:(double)a2 inContext:(struct CGContext { } *)a3;
- (void)drawDistributionInContext:(struct CGContext { } *)a0;
- (void)drawCorrelationInContext:(struct CGContext { } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
