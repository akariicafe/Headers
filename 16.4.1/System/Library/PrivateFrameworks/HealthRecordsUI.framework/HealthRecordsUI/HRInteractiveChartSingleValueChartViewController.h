@class _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource;

@interface HRInteractiveChartSingleValueChartViewController : HKInteractiveChartOverlayViewController

@property (retain, nonatomic) _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *annotationViewDataSource;

- (void).cxx_destruct;
- (id)_colorForDisplayType:(id)a0;
- (id)makeAnnotationDataSource;
- (id)makeStandardCurrentValueViewDataSource;
- (void)updateSelectionAnnotationDataSourceForContext:(id)a0 displayType:(id)a1 timeScope:(long long)a2;

@end
