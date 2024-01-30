@class NSArray, SCLTimeIntervalsFormatter, PSSpecifier, NSString;

@interface SCLCustomDayDataSource : SCLSpecifierDataSource <SCLCustomDayViewControllerDelegate>

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) NSArray *weekdaySpecifiers;
@property (retain, nonatomic) SCLTimeIntervalsFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)customDayViewControllerWillDismiss:(id)a0;
- (long long)dayForSpecifier:(id)a0;
- (id)initWithListController:(id)a0 viewModel:(id)a1;
- (id)scheduleIntervalForSpecifier:(id)a0;
- (void)showEditorForSpecifier:(id)a0;
- (id)specifierForDay:(long long)a0;
- (void)updateSpecifiersWithCurrentCalendar;

@end
