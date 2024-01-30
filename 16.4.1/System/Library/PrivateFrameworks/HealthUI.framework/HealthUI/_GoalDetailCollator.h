@interface _GoalDetailCollator : NSObject {
    long long _entryCount;
    long long _entriesExceedingGoal;
    double _totalPercentFromGoal;
}

- (id)init;
- (id)activitySummaryDetailStringWithActivitySummary:(id)a0 unitPreferenceController:(id)a1 activityValue:(long long)a2 displayTypeController:(id)a3;
- (id)detailStringWithTimeScope:(long long)a0;
- (void)processCoordinateUserInfo:(id)a0;

@end
