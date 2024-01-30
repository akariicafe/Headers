@class NSMutableArray, TSCHChartAxis;

@interface TSCHChartAxisAnalyzer : NSObject {
    TSCHChartAxis *mAxis;
    BOOL mShouldCalculateMedian;
    double mMin;
    double mMax;
    double mMedian;
    unsigned long long mNumValues;
    double mSumOfValues;
    BOOL mFirstValue;
    BOOL mDidCalculateMedian;
    NSMutableArray *mValues;
}

+ (id)analyzerForAxis:(id)a0 needsMedian:(BOOL)a1;

- (void).cxx_destruct;
- (double)median;
- (double)max;
- (double)average;
- (double)min;
- (id)initForAxis:(id)a0 needsMedian:(BOOL)a1;
- (BOOL)p_hasMedianReferenceLine;
- (void)addGridValue:(id)a0 forSeries:(id)a1;

@end
