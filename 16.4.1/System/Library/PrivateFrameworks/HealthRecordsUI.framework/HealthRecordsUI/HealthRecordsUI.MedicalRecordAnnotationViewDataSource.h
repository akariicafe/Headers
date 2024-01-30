@interface HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {
    void /* unknown type, empty encoding */ dateGroup;
    void /* unknown type, empty encoding */ monthYearLabel;
    void /* unknown type, empty encoding */ timeLabel;
    void /* unknown type, empty encoding */ dividerLabel;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)showSeparators;
- (id)dateViewWithOrientation:(long long)a0;
- (id)leftMarginViewWithOrientation:(long long)a0;
- (long long)numberOfValuesForAnnotationView:(id)a0;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;

@end
