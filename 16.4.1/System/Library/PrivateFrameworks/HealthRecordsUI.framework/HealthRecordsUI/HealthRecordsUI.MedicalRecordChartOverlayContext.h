@interface HealthRecordsUI.MedicalRecordChartOverlayContext : NSObject <HKOverlayContext> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ defaultColors;
    void /* unknown type, empty encoding */ selectedColors;
    void /* unknown type, empty encoding */ verticalAxis;
    void /* unknown type, empty encoding */ cachedItem;
    void /* unknown type, empty encoding */ cachedOverlayDisplayType;
    void /* unknown type, empty encoding */ cachedDataSource;
}

- (id)init;
- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)contextItemForLastUpdate;
- (id)initWithTitle:(id)a0 dataSource:(id)a1 defaultColors:(id)a2 selectedColors:(id)a3 verticalAxis:(id)a4;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;

@end
