@class NSArray, NSMutableDictionary, NSString;

@interface HDSPSleepEventList : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) NSMutableDictionary *eventsByProvider;
@property (readonly, nonatomic) NSArray *sortedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)removeAllEvents;
- (id)succinctDescriptionBuilder;
- (void)removeEventsForProvider:(id)a0;
- (void)_sortEvents;
- (id)allEvents;
- (id)overdueEventsForDate:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)nextEvent;
- (void)addEvents:(id)a0 provider:(id)a1;
- (void).cxx_destruct;
- (void)removeEvents:(id)a0;

@end
