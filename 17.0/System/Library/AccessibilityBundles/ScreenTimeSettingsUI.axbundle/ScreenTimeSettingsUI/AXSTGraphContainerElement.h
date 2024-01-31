@class NSString, AXChartDescriptor;

@interface AXSTGraphContainerElement : UIAccessibilityElement <AXChart>

@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) AXChartDescriptor *accessibilityChartDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)accessibilityContainerType;
- (void).cxx_destruct;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilitySupportsChartsV2;
- (id)_accessibilityChartSummary;
- (id)_accessibilityDataSeries;
- (id)_accessibilitySeriesTitle;
- (id)_accessibilityXAxis;
- (id)_accessibilityYAxis;
- (id)_axBarElements;
- (id)_axTimeValues;
- (id)_axXAxisLabels;
- (double)_updateYValueForType:(double)a0;

@end
