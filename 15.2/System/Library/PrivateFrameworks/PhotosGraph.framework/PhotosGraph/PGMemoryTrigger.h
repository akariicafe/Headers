@class NSObject;
@protocol OS_os_log;

@interface PGMemoryTrigger : NSObject

@property (readonly, nonatomic) unsigned long long triggerType;
@property (readonly, nonatomic) BOOL supportsFutureLookup;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;

+ (id)validityIntervalForLocalStartDate:(id)a0 localEndDate:(id)a1 timeZone:(id)a2;
+ (id)singleDayValidityIntervalWithContext:(id)a0;
+ (id)memoryTriggerResultsForMemoryNodes:(id)a0 withValidityInterval:(id)a1;
+ (id)memoryTriggerResultsForMemoryNodesArray:(id)a0 withValidityInterval:(id)a1;
+ (unsigned long long)triggerTypeFromString:(id)a0;
+ (id)stringFromTriggerType:(unsigned long long)a0;
+ (id)localDateIntervalFromLocalDate:(id)a0 startDayOffset:(long long)a1 endDayOffset:(long long)a2 inTimeZone:(id)a3;
+ (id)dateNodesInGraph:(id)a0 startDayOffset:(long long)a1 endDayOffset:(long long)a2 fromLocalDate:(id)a3 inTimeZone:(id)a4;
+ (id)monthDayCalendarUnitValuesForLocalDateInterval:(id)a0;
+ (id)monthDayNodesInGraph:(id)a0 startDayOffset:(long long)a1 endDayOffset:(long long)a2 fromLocalDate:(id)a3 inTimeZone:(id)a4;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLoggingConnection:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;

@end
