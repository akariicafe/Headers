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
- (id)contextItemForLastUpdate;
- (void)updateContextItemForDateInterval:(id)a0 timeScope:(long long)a1 completion:(id /* block */)a2;
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)initWithTitle:(id)a0 dataSource:(id)a1 defaultColors:(id)a2 selectedColors:(id)a3 verticalAxis:(id)a4;

@end
