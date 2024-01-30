@class NSArray, NSMutableDictionary, NSString;

@interface HDSPSleepEventList : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) NSMutableDictionary *eventsByProvider;
@property (readonly, nonatomic) NSArray *sortedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeEvents:(id)a0;
- (void)removeAllEvents;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)nextEvent;
- (id)succinctDescription;
- (void)addEvents:(id)a0 provider:(id)a1;
- (id)overdueEventsForDate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)allEvents;
- (void)removeEventsForProvider:(id)a0;
- (void)_sortEvents;

@end
