@class TSCHChartModel, TSCHChartSeriesType, NSArray, TSCHChartInfo, TSCHChartSeries, TSCH3DChartType, TSCHChartAxis;

@interface TSCH3DChartModelEnumerator : NSObject {
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _seriesValues;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _coordinateValues;
    NSArray *_seriesList;
    unsigned long long _numberOfValues;
    TSCHChartAxis *_coordinateAxis;
    TSCHChartAxis *_valueAxis;
    double _intercept;
    double _unitSpaceIntercept;
    struct ValueEnumerator { BOOL _forward; unsigned long long _index; unsigned long long _max; double _value; } _seriesEnumerator;
    struct ValueEnumerator { BOOL _forward; unsigned long long _index; unsigned long long _max; double _value; } _coordinateEnumerator;
}

@property (readonly, nonatomic) TSCHChartSeries *series;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } size;
@property (readonly, nonatomic) TSCHChartModel *model;
@property (readonly, nonatomic) TSCHChartInfo *info;
@property (readonly, nonatomic) TSCH3DChartType *chartType;
@property (readonly, nonatomic) TSCHChartSeriesType *seriesType;

+ (id)enumeratorWithModel:(id)a0 chartType:(id)a1 seriesType:(id)a2;

- (id)seriesName;
- (unsigned long long)index;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })position;
- (id)nextElement;
- (void).cxx_destruct;
- (double)intercept;
- (id)valueString;
- (id).cxx_construct;
- (BOOL)isValid;
- (void)updateValue;
- (unsigned long long)elementIndex;
- (id)elementEnumerator;
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
- (unsigned long long)numberOfSeries;
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
