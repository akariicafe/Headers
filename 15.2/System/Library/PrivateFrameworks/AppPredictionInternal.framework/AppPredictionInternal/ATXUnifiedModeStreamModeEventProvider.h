@interface ATXUnifiedModeStreamModeEventProvider : ATXModeTransitionModeEventProvider

- (id)init;
- (id)biomePublisherWithBookmark:(id)a0;
- (id)aggregationEventsFromEvent:(id)a0;
- (BOOL)isEventFromProvider:(id)a0;
- (id)dateIntervalFromEvent:(id)a0;

@end
