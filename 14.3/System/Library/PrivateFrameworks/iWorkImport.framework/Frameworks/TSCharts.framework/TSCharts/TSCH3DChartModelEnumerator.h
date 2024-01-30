@class TSCHChartModel, TSCHChartSeriesType, NSArray, TSCHChartInfo, TSCHChartSeries, TSCH3DChartType, TSCHChartAxis;

@interface TSCH3DChartModelEnumerator : NSObject {
    struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } mSeriesValues;
    struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } mCoordinateValues;
    NSArray *mSeriesList;
    unsigned long long mNumberOfValues;
    TSCHChartAxis *mCoordinateAxis;
    TSCHChartAxis *mValueAxis;
    double mIntercept;
    double mUnitSpaceIntercept;
    struct ValueEnumerator { BOOL mForward; unsigned long long mIndex; unsigned long long mMax; double mValue; } mSeriesEnumerator;
    struct ValueEnumerator { BOOL mForward; unsigned long long mIndex; unsigned long long mMax; double mValue; } mCoordinateEnumerator;
}

@property (readonly, nonatomic) TSCHChartSeries *series;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } size;
@property (readonly, nonatomic) TSCHChartModel *model;
@property (readonly, nonatomic) TSCHChartInfo *info;
@property (readonly, nonatomic) TSCH3DChartType *chartType;
@property (readonly, nonatomic) TSCHChartSeriesType *seriesType;

+ (id)enumeratorWithModel:(id)a0 chartType:(id)a1 seriesType:(id)a2;

- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })position;
- (id)seriesName;
- (void).cxx_destruct;
- (unsigned long long)index;
- (id)nextElement;
- (void)updateValue;
- (void)dealloc;
- (BOOL)isValid;
- (id).cxx_construct;
- (id)valueString;
- (double)intercept;
- (unsigned long long)elementIndex;
- (id)elementEnumerator;
- (unsigned long long)numberOfSeries;
- (id)seriesEnumerator;
- (id)nextSeries;
- (double)unitSpaceIntercept;
- (id)reverseSeriesEnumerator;
- (BOOL)skipZeroValues;
- (double)axisSpaceValue;
- (BOOL)showValueLabels;
- (BOOL)isStackedPercentageThatRoundsDownToZero;
- (unsigned int)valueLabelPositionForAxisValue:(double)a0;
- (id)valueStringForLabelResources:(id)a0;
- (double)unitSpaceValue;
- (id)nextSeries:(unsigned long long)a0;
- (double)groupValue;
- (BOOL)isValidNonZero;
- (id)initWithModel:(id)a0 chartType:(id)a1 seriesType:(id)a2;
- (void)resetForReverseSeriesEnumeration:(BOOL)a0;
- (id)p_resetCoordinateEnumeration;
- (unsigned long long)countSeries;
- (void)updateAxes;
- (id)nextElement:(unsigned long long)a0;
- (double)unitSpaceValueForAxisValue:(double)a0;
- (BOOL)showSeriesName;
- (id)seriesFill;
- (id)seriesFillOrStrokeColor;

@end
