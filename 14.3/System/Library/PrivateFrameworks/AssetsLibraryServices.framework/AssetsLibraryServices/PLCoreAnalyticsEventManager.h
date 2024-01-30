@class NSMutableDictionary;

@interface PLCoreAnalyticsEventManager : NSObject {
    NSMutableDictionary *_eventMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (double)startRecordingTimedEventToken;
- (id)init;
- (void)setPayloadValue:(id)a0 forKey:(id)a1 onEventWithName:(id)a2;
- (void).cxx_destruct;
- (id)_eventForEventName:(id)a0;
- (void)publishAllEvents;
- (void)stopRecordingTimedEventWithToken:(double)a0 forKey:(id)a1 onEventWithName:(id)a2;
- (id)description;
- (id)rawEventForEventName:(id)a0;
- (void)removePayloadValueForKey:(id)a0 onEventWithName:(id)a1;
- (void)mergePayload:(id)a0 onEventWithName:(id)a1;
- (void)removeEventWithName:(id)a0;
- (id)valueForKey:(id)a0 onEventWithName:(id)a1;
- (void)publishEventWithName:(id)a0;

@end
