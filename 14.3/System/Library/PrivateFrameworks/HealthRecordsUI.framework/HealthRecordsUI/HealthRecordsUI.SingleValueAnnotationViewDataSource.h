@interface HealthRecordsUI.SingleValueAnnotationViewDataSource : HealthRecordsUI.MedicalRecordAnnotationViewDataSource {
    void /* unknown type, empty encoding */ referenceRangeView;
}

- (id)init;
- (void).cxx_destruct;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;
- (void)updateUsing:(id)a0;
- (void)updateUsing:(id)a0 valueRange:(id)a1 dateRange:(id)a2 timeScope:(long long)a3;

@end
