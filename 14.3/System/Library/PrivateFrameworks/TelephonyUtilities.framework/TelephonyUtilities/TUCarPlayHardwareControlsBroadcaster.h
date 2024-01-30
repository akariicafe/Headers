@class NSString;

@interface TUCarPlayHardwareControlsBroadcaster : NSObject {
    struct __IOHIDEventSystemClient { } *_hidEventSystemClientRef;
}

@property (retain) NSString *eventTypeToIgnore;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)longPressTimerFired:(id)a0;

@end
