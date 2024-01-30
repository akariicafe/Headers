@class TSUBezierPath, NSString, TSCHChartSeries, TSURegressionModel;

@interface TSCHTrendLineData : NSObject <TSCHUnretainedParent> {
    TSCHChartSeries *mSeries;
    long long mLineType;
    TSURegressionModel *mRegression;
    double mMaxYValue;
    double mMinYValue;
    double mMaxXValue;
    double mMinXValue;
    int mInputAxisType;
    int mOutputAxisType;
    BOOL mTrendLineInvalid;
    TSUBezierPath *mCachedTrendLinePath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedChartFrame;
    double mOffsetInBody;
    BOOL mCachedChartVertical;
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

- (void).cxx_destruct;
- (void)invalidateData;
- (void)dealloc;
- (void)updateIfNeeded;
- (void)clearParent;
- (id)initWithSeries:(id)a0;
- (BOOL)showTrendLineForAxisID:(id)a0;
- (double)minValueForAxisID:(id)a0;
- (double)maxValueForAxisID:(id)a0;
- (void)p_releaseCache;
- (void)p_updateTrendLineData;
- (id)p_linePathFromPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void)trendLineUnitSpacePoints:(struct **)a0 count:(unsigned long long *)a1 drawCurve:(BOOL *)a2 maxPoints:(unsigned long long)a3;
- (struct { double x0; double x1; })p_unitPoint:(struct { double x0; double x1; })a0 toScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 offset:(double)a2 vertical:(BOOL)a3;
- (void)p_addPathToTrendLinePathWithPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1 curved:(BOOL)a2 curveFitter:(id)a3;
- (id)p_dataPointValues;
- (unsigned long long)p_fillArrayX:(id)a0 andY:(id)a1 fromPoints:(id)a2;
- (void)p_calcMARegression:(unsigned long long)a0 xData:(id)a1 yData:(id)a2;
- (void)p_calcBoundsForMovingAverage;
- (unsigned long long)p_fillArrayX:(double *)a0 andY:(double *)a1 fromPoints:(id)a2 hasNegativeX:(BOOL *)a3;
- (void)p_calcRegression:(unsigned long long)a0 xData:(double *)a1 yData:(double *)a2;
- (void)p_calcBounds;
- (long long)p_getTrendLineType;
- (void)p_generateRegression;
- (struct __CFAttributedString { } *)newEquationAttributedString;
- (id)trendLinePathForChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 offsetInBody:(double)a1 vertical:(BOOL)a2;

@end
