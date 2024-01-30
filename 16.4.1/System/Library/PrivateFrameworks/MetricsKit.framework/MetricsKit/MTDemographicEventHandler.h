@interface MTDemographicEventHandler : MTEventHandler

- (id)eventType;
- (id)ageDataForUserId:(id)a0 updateInterval:(double)a1;
- (void)clearUserDefaultsForTopic:(id)a0;
- (id)eventVersion:(id)a0;
- (BOOL)mtIncludeBaseFields;
- (id)totalYearsSinceDate:(id)a0 calendar:(id)a1;

@end
