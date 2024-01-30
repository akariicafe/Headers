@class NSMutableDictionary;

@interface MRGameControllerDelayedEvents : NSObject {
    NSMutableDictionary *_events;
}

- (void).cxx_destruct;
- (id)eventForController:(unsigned long long)a0 element:(int)a1;
- (void)invokeEventsForController:(unsigned long long)a0 beacuseElement:(int)a1;

@end
