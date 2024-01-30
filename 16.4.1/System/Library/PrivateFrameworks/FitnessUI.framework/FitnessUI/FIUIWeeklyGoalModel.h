@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject {
    HKHealthStore *_healthStore;
}

- (id)initWithHealthStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchMostRecentWeeklyGoalWithCompletion:(id /* block */)a0;
- (void)saveNewWeeklyGoal:(id)a0 forDate:(id)a1;
- (void)saveNewWeeklyGoal:(id)a0 forDate:(id)a1 completion:(id /* block */)a2;
- (void)saveNewWeeklyGoal:(id)a0 quantityType:(id)a1 forDate:(id)a2 completion:(id /* block */)a3;
- (void)saveNewWeeklyGoals:(id)a0;

@end
