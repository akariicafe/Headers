@class NSArray, SCLCustomDayDataSource, PSSpecifier, NSString, SCLTimeIntervalDataSource;

@interface SCLDaySettingsSpecifierSource : SCLSpecifierDataSource <SCLTimeIntervalDataSourceDelegate>

@property (retain, nonatomic) NSArray *currentSpecifiers;
@property (retain, nonatomic) SCLTimeIntervalDataSource *repeatedDaySource;
@property (retain, nonatomic) SCLCustomDayDataSource *customDayDataSource;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithListController:(id)a0 viewModel:(id)a1;
- (void)updateScheduleType:(unsigned long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 specifier:(id)a2;
- (long long)repeatScheduleForRepeatingScheduleType:(unsigned long long)a0;
- (void)timeIntervalDataSource:(id)a0 didUpdateTimeIntervals:(id)a1;

@end
