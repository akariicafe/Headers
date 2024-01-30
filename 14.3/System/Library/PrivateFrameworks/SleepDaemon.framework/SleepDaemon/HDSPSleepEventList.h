@class NSArray, NSMutableDictionary, NSString;

@interface HDSPSleepEventList : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) NSMutableDictionary *eventsByProvider;
@property (readonly, nonatomic) NSArray *sortedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allEvents;
- (id)init;
- (void)addEvents:(id)a0 provider:(id)a1;
- (void).cxx_destruct;
- (void)removeAllEvents;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_sortEvents;
- (void)removeEventsForProvider:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)nextEvent;
- (id)succinctDescriptionBuilder;
- (void)removeEvents:(id)a0;
- (id)overdueEventsForDate:(id)a0;

@end
