@class HKConcept, NSArray, HKUserDomainConcept, _TtC15HealthRecordsUI28MedicalRecordChartDataSource;
@protocol _TtP15HealthRecordsUI31MedicalRecordChartConfiguration_;

@interface HROverlayRoomViewController : HKOverlayRoomViewController

@property (retain, nonatomic) HKConcept *concept;
@property (retain, nonatomic) HKUserDomainConcept *userConcept;
@property (retain, nonatomic) id<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_> configuration;
@property (copy, nonatomic) NSArray *displayTypes;
@property (retain, nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *masterDataSource;
@property (copy, nonatomic) NSArray *seriesDataSources;
@property (retain, nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *outOfRangeDataSource;
@property (retain, nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *noRangeDataSource;
@property (readonly, nonatomic) BOOL hasChart;

+ (void)determineChartabilityOfConcept:(id)a0 withApplicationItems:(id)a1 completion:(id /* block */)a2;
+ (id)_verticalAxis;
+ (void)determineChartabilityOfUserConcept:(id)a0 records:(id)a1 withApplicationItems:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)contextSectionContainersForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)initWithConcept:(id)a0 configuration:(id)a1 displayDate:(id)a2 masterDataSource:(id)a3 seriesDataSources:(id)a4 outOfRangeDataSource:(id)a5 noRangeDataSource:(id)a6 overlayMode:(long long)a7 applicationItems:(id)a8;
- (id)initWithUserConcept:(id)a0 configuration:(id)a1 displayDate:(id)a2 masterDataSource:(id)a3 seriesDataSources:(id)a4 outOfRangeDataSource:(id)a5 noRangeDataSource:(id)a6 overlayMode:(long long)a7 applicationItems:(id)a8;
- (id)initialSelectedContextForMode:(long long)a0;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (BOOL)supportsShowAllFilters;

@end
