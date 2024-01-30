@class NSMutableDictionary;

@interface MRGameControllerDelayedEvents : NSObject {
    NSMutableDictionary *_events;
}

- (void).cxx_destruct;
- (void)invokeEventsForController:(unsigned long long)a0 beacuseElement:(int)a1;
- (id)eventForController:(unsigned long long)a0 element:(int)a1;

@end
