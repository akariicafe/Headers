@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (id)_widgetsForPersonalMode;
- (id)_widgetsForSleepMode;
- (BOOL)_hasAlarmActivity;
- (id)_widgetsForReadingMode;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)_widgetsForGamingMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_widgetsForMindfulnessMode;
- (id)_widgetsForDrivingMode;
- (id)_widgetsForWorkMode;
- (BOOL)_hasTVInterest;
- (id)_widgetsForExerciseMode;

@end
