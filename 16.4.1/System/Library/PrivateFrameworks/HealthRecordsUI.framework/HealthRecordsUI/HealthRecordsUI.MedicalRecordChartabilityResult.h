@class NSArray, NSDate;

@interface HealthRecordsUI.MedicalRecordChartabilityResult : NSObject {
    void /* unknown type, empty encoding */ seriesDataSources;
    void /* unknown type, empty encoding */ latestChartableDate;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ configuration;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ masterDataSource;
@property (nonatomic, readonly) NSArray *seriesDataSources;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ outOfRangeDataSource;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ noRangeDataSource;
@property (nonatomic, readonly) NSDate *latestChartableDate;
@property (nonatomic, readonly) BOOL shouldProduceAtLeastOneOverlay;

- (id)init;
- (void).cxx_destruct;

@end
