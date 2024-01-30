@interface CBProxFilter : CBFilter {
    float _proxReleaseTime;
    BOOL _proxHasJustBeenRemoved;
    float _proxTriggerDelay;
}

@property (nonatomic, getter=isTriggered) BOOL triggered;

- (id)init;
- (void)dealloc;
- (id)filterEvent:(id)a0;
- (id)handleProximityEvent:(id)a0;
- (id)handleALSEvent:(id)a0;

@end
