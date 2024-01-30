@class AXChartDescriptor;

@interface TeaCharts.LineSeriesAccessibilityElement : UIAccessibilityElement <AXChart> {
    void /* unknown type, empty encoding */ series;
    void /* unknown type, empty encoding */ chartModel;
    void /* unknown type, empty encoding */ interactor;
    void /* unknown type, empty encoding */ dataElements;
    void /* unknown type, empty encoding */ xAxisDateFormatter;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;
@property (nonatomic, retain) AXChartDescriptor *accessibilityChartDescriptor;

- (id)initWithAccessibilityContainer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)tc_accessibilityDataSeriesValueDescriptionForPosition:(double)a0 axis:(long long)a1;

@end
