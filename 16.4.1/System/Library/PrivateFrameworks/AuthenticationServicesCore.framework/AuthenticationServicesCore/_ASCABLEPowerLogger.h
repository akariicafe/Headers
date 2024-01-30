@interface _ASCABLEPowerLogger : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _didSendStartedEvent;
    BOOL _didSendFinishedEvent;
}

- (void)dealloc;
- (id)init;
- (void)logAuthenticationFinishedEventIfNeeded;
- (void)logAuthenticationStartedEventIfNeeded;

@end
