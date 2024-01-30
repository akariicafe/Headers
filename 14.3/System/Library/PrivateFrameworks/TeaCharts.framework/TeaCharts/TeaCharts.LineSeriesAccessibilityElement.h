@interface TeaCharts.LineSeriesAccessibilityElement : UIAccessibilityElement {
    void /* unknown type, empty encoding */ series;
    void /* unknown type, empty encoding */ chartModel;
    void /* unknown type, empty encoding */ interactor;
    void /* unknown type, empty encoding */ dataElements;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccessibilityContainer:(id)a0;
- (id)tc_accessibilityDataSeriesName;
- (id)tc_accessibilityDataSeriesValuesForAxis:(long long)a0;
- (long long)tc_accessibilityDataSeriesType;
- (id)tc_accessibilityDataSeriesTitleForAxis:(long long)a0;
- (id)tc_accessibilityDataSeriesMinimumValueForAxis:(long long)a0;
- (id)tc_accessibilityDataSeriesMaximumValueForAxis:(long long)a0;
- (id)tc_accessibilityDataSeriesGridlinePositionsForAxis:(long long)a0;
- (BOOL)tc_accessibilityDataSeriesSupportsSummarization;
- (BOOL)tc_accessibilityDataSeriesSupportsSonification;
- (BOOL)tc_accessibilityDataSeriesIncludesTrendlineInSonification;
- (double)tc_accessibilityDataSeriesSonificationDuration;
- (id)tc_accessibilityDataSeriesValueDescriptionForPosition:(double)a0 axis:(long long)a1;

@end
