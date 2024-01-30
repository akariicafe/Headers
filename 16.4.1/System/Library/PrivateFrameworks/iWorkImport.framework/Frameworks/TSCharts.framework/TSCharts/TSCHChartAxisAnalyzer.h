@class NSMutableArray, TSCHChartAxis;

@interface TSCHChartAxisAnalyzer : NSObject {
    TSCHChartAxis *_axis;
    BOOL _shouldCalculateMedian;
    double _min;
    double _max;
    double _median;
    unsigned long long _numValues;
    double _sumOfValues;
    BOOL _firstValue;
    BOOL _didCalculateMedian;
    NSMutableArray *_values;
}

+ (id)analyzerForAxis:(id)a0 needsMedian:(BOOL)a1;

- (double)min;
- (double)average;
- (double)max;
- (double)median;
- (void).cxx_destruct;
- (void)addGridValue:(id)a0 forSeries:(id)a1;
- (id)initForAxis:(id)a0 needsMedian:(BOOL)a1;
- (BOOL)p_hasMedianReferenceLine;

@end
