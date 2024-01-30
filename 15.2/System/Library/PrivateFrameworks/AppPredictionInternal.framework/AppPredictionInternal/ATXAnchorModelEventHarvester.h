@interface ATXAnchorModelEventHarvester : NSObject

+ (id)fetchEventsAfterAnchorOccurrenceDate:(id)a0 withDuetDataProviderClass:(Class)a1 limit:(unsigned long long)a2 maxSecondsBeforeAnchor:(long long)a3 maxSecondsAfterAnchor:(long long)a4 predicates:(id)a5;
+ (id)negativeAppsGivenAllAppIds:(id)a0 positiveAppIds:(id)a1;
+ (id)randomSampleFromArray:(id)a0 sampleSize:(unsigned long long)a1;
+ (id)negativeActionsOnAnchorOccurrenceDate:(id)a0 positiveActionIds:(id)a1;
+ (id)idsFromDuetEvents:(id)a0;
+ (id)fetchEventsAfterAnchorOccurenceDate:(id)a0 withBiomePublisher:(id)a1 maxSecondsBeforeAnchor:(long long)a2 maxSecondsAfterAnchor:(long long)a3;
+ (id)negativeActionsOnAnchorOccurrenceDate:(id)a0 positiveActionEvents:(id)a1;
+ (id)idsFromBiomeEvents:(id)a0;
+ (id)deduplicatedActionEventsByIdFromActionEvents:(id)a0;

@end
