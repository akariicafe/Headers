@class TSCHChartSeries;

@interface TSCHErrorBarData : NSObject <TSCHUnretainedParent> {
    TSCHChartSeries *mSeries;
    BOOL mSupportsXAxisBars;
    double mMaxValue;
    double mMinValue;
    double mMaxValueScatterX;
    double mMinValueScatterX;
    double mStandardError;
    double mStandardDeviation;
    double mStandardDeviationMean;
    double mStandardErrorScatterX;
    double mStandardDeviationScatterX;
    double mStandardDeviationMeanScatterX;
    BOOL mErrorBarsInvalid;
}

@property (readonly, nonatomic) long long maxValueGroupIndex;
@property (readonly, nonatomic) long long minValueGroupIndex;

+ (BOOL)hasErrorBarsForSeries:(id)a0;
+ (long long)p_errorBarSettingForSeries:(id)a0 useXAxis:(BOOL)a1 axisID:(id)a2;
+ (long long)errorBarTypeForAxisID:(id)a0 series:(id)a1;
+ (BOOL)errorBarIsVerticalForAxisID:(id)a0 series:(id)a1;

- (void).cxx_destruct;
- (void)invalidateData;
- (void)updateIfNeeded;
- (void)clearParent;
- (id)initWithSeries:(id)a0;
- (double)minValueForAxisID:(id)a0;
- (double)maxValueForAxisID:(id)a0;
- (BOOL)showErrorBarsForAxisID:(id)a0;
- (float)opacityForAxisID:(id)a0;
- (id)shadowForAxisID:(id)a0;
- (id)strokeForAxisID:(id)a0;
- (struct CGPoint { double x0; double x1; })p_getValuePointForGroupIndex:(unsigned long long)a0 inputAxis:(id)a1 inputAxisContinuous:(BOOL)a2 outputAxis:(id)a3 barVertical:(BOOL)a4;
- (long long)p_errorBarSettingForAxisID:(id)a0 value:(double)a1 barType:(long long)a2;
- (double)p_positiveErrorForValue:(double *)a0 onAxisID:(id)a1 valueIndex:(unsigned long long)a2;
- (double)p_negativeErrorForValue:(double *)a0 onAxisID:(id)a1 valueIndex:(unsigned long long)a2;
- (void)p_clearData;
- (void)p_updateDataForAxisID:(id)a0;
- (unsigned long long)p_stripBadValuesInArray:(double *)a0 numberOfModelValues:(unsigned long long)a1;
- (double)p_stdDevFactorForAxisID:(id)a0;
- (long long)p_errorBarTypeForAxisID:(id)a0;
- (double)p_fixedErrorForAxisID:(id)a0;
- (double)p_percentageErrorForAxisID:(id)a0;
- (double)p_stdErrorErrorForAxisID:(id)a0;
- (double)p_stdDevErrorForAxisID:(id)a0;
- (double)p_stdDevMeanForAxisID:(id)a0;
- (double)p_customErrorForAxisID:(id)a0 valueIndex:(unsigned long long)a1 positive:(BOOL)a2;
- (double)p_errorForValue:(double *)a0 onAxisID:(id)a1 valueIndex:(unsigned long long)a2 positive:(BOOL)a3;
- (double *)p_createArrayOfSeriesValuesForAxisID:(id)a0 count:(unsigned long long)a1;
- (double *)p_createArrayOfSeriesOffsetsForAxisID:(id)a0 count:(unsigned long long)a1;
- (void)p_updateStdErrorForAxisID:(id)a0 forValues:(double *)a1 withOffsets:(double *)a2 numberOfModelValues:(unsigned long long)a3;
- (void)p_updateMinMaxForAxisID:(id)a0 forValues:(double *)a1 withOffsets:(double *)a2 numberOfModelValues:(unsigned long long)a3;
- (void)p_updateStdDeviationForAxisID:(id)a0 forValues:(double *)a1 withOffsets:(double *)a2 numberOfModelValues:(unsigned long long)a3;
- (void)p_updateMinMaxForStackedPercentageAxis:(id)a0 forValues:(double *)a1 withOffsets:(double *)a2 numberOfModelValues:(unsigned long long)a3;
- (id)lineEndForAxisID:(id)a0;
- (BOOL)hasErrorDataForInputAxis:(id)a0 outputAxis:(id)a1 inputAxisContinuous:(BOOL)a2 outputAxisContinuous:(BOOL)a3 groupIndex:(unsigned long long)a4 groupsCount:(unsigned long long)a5 barVertical:(BOOL)a6 barType:(long long)a7 outUnitValue:(struct CGPoint { double x0; double x1; } *)a8 outUnitPositive:(struct CGPoint { double x0; double x1; } *)a9 outUnitNegative:(struct CGPoint { double x0; double x1; } *)a10;

@end
