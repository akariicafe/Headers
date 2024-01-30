@class TSUBezierPath, NSString, TSCHChartSeries, TSURegressionModel;

@interface TSCHTrendLineData : NSObject {
    TSCHChartSeries *_series;
    long long _lineType;
    TSURegressionModel *_regression;
    double _maxYValue;
    double _minYValue;
    double _maxXValue;
    double _minXValue;
    int _inputAxisType;
    int _outputAxisType;
    BOOL _trendLineInvalid;
    TSUBezierPath *_cachedTrendLinePath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedChartFrame;
    double _offsetInBody;
    BOOL _cachedChartVertical;
}

@property (readonly, nonatomic) BOOL showTrendLine;
@property (readonly, nonatomic) BOOL showTrendLineLegendText;
@property (readonly, nonatomic) BOOL showEquation;
@property (readonly, nonatomic) BOOL showRSquared;
@property (readonly, nonatomic) NSString *trendLineLegendText;
@property (readonly, nonatomic) NSString *rSquaredText;
@property (readonly, nonatomic) float equationTextOpacity;
@property (readonly, nonatomic) float rSquaredTextOpacity;

+ (long long)getTrendLineTypeForSeries:(id)a0;

- (void)updateIfNeeded;
- (void)dealloc;
- (void)invalidateData;
- (void).cxx_destruct;
- (id)initWithSeries:(id)a0;
- (void)p_calcMARegression:(unsigned long long)a0 xData:(id)a1 yData:(id)a2;
- (double)maxValueForAxisID:(id)a0;
- (double)minValueForAxisID:(id)a0;
- (struct __CFAttributedString { } *)newEquationAttributedString;
- (void)p_addPathToTrendLinePathWithPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1 curved:(BOOL)a2 curveFitter:(id)a3;
- (void)p_calcBounds;
- (void)p_calcBoundsForMovingAverage;
- (void)p_calcRegression:(unsigned long long)a0 xData:(double *)a1 yData:(double *)a2;
- (id)p_dataPointValues;
- (unsigned long long)p_fillArrayX:(id)a0 andY:(id)a1 fromPoints:(id)a2;
- (unsigned long long)p_fillArrayX:(double *)a0 andY:(double *)a1 fromPoints:(id)a2 hasNegativeX:(BOOL *)a3;
- (void)p_generateRegression;
- (long long)p_getTrendLineType;
- (id)p_linePathFromPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void)p_releaseCache;
- (struct { double x0; double x1; })p_unitPoint:(struct { double x0; double x1; })a0 toScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 offset:(double)a2 vertical:(BOOL)a3;
- (void)p_updateTrendLineData;
- (BOOL)showTrendLineForAxisID:(id)a0;
- (id)trendLinePathForChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 offsetInBody:(double)a1 vertical:(BOOL)a2;
- (void)trendLineUnitSpacePoints:(struct **)a0 count:(unsigned long long *)a1 drawCurve:(BOOL *)a2 maxPoints:(unsigned long long)a3;

@end
