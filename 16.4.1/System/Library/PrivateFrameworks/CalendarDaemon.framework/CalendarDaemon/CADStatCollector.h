@interface CADStatCollector : NSObject

@property (readonly, nonatomic) BOOL wantsStores;
@property (readonly, nonatomic) BOOL wantsCalendars;
@property (readonly, nonatomic) BOOL wantsOccurrences;
@property (readonly, nonatomic) BOOL wantsEvents;

+ (BOOL)enabled;
+ (id)eventName;

- (BOOL)enabled;
- (id)eventDictionaries;
- (id)eventName;
- (id)desiredOccurrenceRange;
- (void)prepareWithContext:(id)a0;
- (void)processBirthdayCalendarEvents:(id)a0;
- (void)processCalendars:(id)a0 inStore:(void *)a1;
- (void)processEvents:(id)a0;
- (void)processOccurrences:(id)a0;
- (void)processSignificantEventWithPredictedLocation:(BOOL)a0 onSharedCalendar:(BOOL)a1;
- (void)processStores:(id)a0;

@end
