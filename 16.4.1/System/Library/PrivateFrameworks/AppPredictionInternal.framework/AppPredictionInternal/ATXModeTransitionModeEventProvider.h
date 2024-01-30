@class NSString;

@interface ATXModeTransitionModeEventProvider : NSObject <ATXModeEntityEventProviderProtocol>

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMode:(unsigned long long)a0;
- (id)init;
- (id)aggregationEventsFromEvent:(id)a0;
- (id)biomePublisherWithBookmark:(id)a0;
- (id)bmStoreEventsForLast61DaysWithStartDateToday:(id)a0 endDateToday:(id)a1 includeWeekends:(BOOL)a2 includeHolidays:(BOOL)a3;
- (id)dateIntervalFromEvent:(id)a0;
- (BOOL)eventIsDuringThanksgivingShutdown:(id)a0;
- (id)eventsFromPublisher;
- (BOOL)isEventFromProvider:(id)a0;
- (BOOL)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(id)a0 aggregationEvent:(id)a1 isLocalToMode:(BOOL)a2;

@end
