@class NSString;

@interface TUCarPlayHardwareControlsBroadcaster : NSObject {
    struct __IOHIDEventSystemClient { } *_hidEventSystemClientRef;
}

@property (retain) NSString *eventTypeToIgnore;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)longPressTimerFired:(id)a0;

@end
