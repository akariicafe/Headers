@class SCLTimeIntervalDataSource, NSString;

@interface SCLCustomDayEditorSource : SCLSpecifierDataSource <SCLTimeIntervalDataSourceDelegate>

@property (readonly, nonatomic) long long day;
@property (retain, nonatomic) SCLTimeIntervalDataSource *timeSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)enabledForSpecifier:(id)a0;
- (id)initWithListController:(id)a0 viewModel:(id)a1 day:(long long)a2 title:(id)a3;
- (void)setEnabled:(id)a0 specifier:(id)a1;
- (void)timeIntervalDataSource:(id)a0 didUpdateTimeIntervals:(id)a1;

@end
