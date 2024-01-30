@class _ISAnimatedImageTimerForwardingProxy, CADisplayLink;

@interface ISAnimatedImageTimer : ISObservable {
    CADisplayLink *_displayLink;
    _ISAnimatedImageTimerForwardingProxy *_displayLinkProxy;
}

@property (nonatomic, setter=_setTimestamp:) double timestamp;

+ (id)sharedTimer;

- (id)mutableChangeObject;
- (void)_updateDisplayLink;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)hasObserversDidChange;
- (void)_fireTimerWithInterval:(double)a0;
- (void)_iosInitialization;
- (void)_iosUpdateDisplayLink;
- (void)_iosAnimationTimerFired:(id)a0;
- (void)_iosDealloc;

@end
