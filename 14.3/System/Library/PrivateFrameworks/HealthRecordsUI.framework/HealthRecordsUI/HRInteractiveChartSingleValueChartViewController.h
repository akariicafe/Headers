@class _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource;

@interface HRInteractiveChartSingleValueChartViewController : HKInteractiveChartOverlayViewController

@property (retain, nonatomic) _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *annotationViewDataSource;

- (void).cxx_destruct;
- (id)makeStandardCurrentValueViewDataSource;
- (id)makeAnnotationDataSourceWithMetrics:(id)a0;
- (void)updateSelectionAnnotationDataSourceForContext:(id)a0 displayType:(id)a1 timeScope:(long long)a2;
- (id)_colorForDisplayType:(id)a0;

@end
