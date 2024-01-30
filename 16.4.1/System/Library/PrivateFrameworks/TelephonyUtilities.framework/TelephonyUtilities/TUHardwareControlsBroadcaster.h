@class NSString;

@interface TUHardwareControlsBroadcaster : NSObject {
    struct __IOHIDEventSystemClient { } *_hidEventSystemClientRef;
}

@property (retain) NSString *eventTypeToIgnore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)longPressTimerFired:(id)a0;

@end
