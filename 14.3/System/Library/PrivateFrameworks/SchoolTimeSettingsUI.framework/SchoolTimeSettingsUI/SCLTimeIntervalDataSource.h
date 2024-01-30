@class SCLScheduleTimeFormatter, NSArray, SCLTimeIntervalModel, NSMutableArray;
@protocol SCLTimeIntervalDataSourceDelegate;

@interface SCLTimeIntervalDataSource : SCLSpecifierDataSource

@property (readonly, nonatomic) SCLTimeIntervalModel *model;
@property (readonly, nonatomic) NSMutableArray *intervalGroupSpecifiers;
@property (readonly, nonatomic) NSArray *addIntervalGroupSpecifiers;
@property (readonly, nonatomic) SCLScheduleTimeFormatter *scheduleTimeFormatter;
@property (copy, nonatomic) NSArray *timeIntervals;
@property (weak, nonatomic) id<SCLTimeIntervalDataSourceDelegate> delegate;

- (void).cxx_destruct;
- (void)addInterval:(id)a0;
- (void)loadSpecifiers;
- (id)initWithListController:(id)a0 timeIntervals:(id)a1;
- (void)model:(id)a0 didAddIntervalAtIndexes:(id)a1;
- (void)applySpecifiers;
- (void)setTimeInterval:(id)a0 forSpecifier:(id)a1;
- (void)configureSpecifier:(id)a0 forIndex:(unsigned long long)a1;
- (id)intervalSpecifiers;
- (void)removeIntervalForSpecifier:(id)a0;
- (unsigned long long)modelIndexForSpecifier:(id)a0;
- (void)model:(id)a0 didUpdateIntervalAtIndex:(unsigned long long)a1;
- (void)model:(id)a0 didDeleteIntervalAtIndex:(unsigned long long)a1;
- (id)createSpecifiersForIntervalsAtIndex:(unsigned long long)a0;
- (void)reconfigureAllSpecifiers;
- (void)notifyDelegateOfModelUpdate;

@end
