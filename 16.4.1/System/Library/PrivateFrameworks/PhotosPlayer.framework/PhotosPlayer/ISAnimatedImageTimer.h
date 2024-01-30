@class _ISAnimatedImageTimerForwardingProxy, CADisplayLink;

@interface ISAnimatedImageTimer : ISObservable {
    CADisplayLink *_displayLink;
    _ISAnimatedImageTimerForwardingProxy *_displayLinkProxy;
}

@property (nonatomic, setter=_setTimestamp:) double timestamp;

+ (id)sharedTimer;

- (void)_updateDisplayLink;
- (void)dealloc;
- (id)mutableChangeObject;
- (id)init;
- (void).cxx_destruct;
- (void)hasObserversDidChange;
- (void)_fireTimerWithInterval:(double)a0;
- (void)_iosAnimationTimerFired:(id)a0;
- (void)_iosDealloc;
- (void)_iosInitialization;
- (void)_iosUpdateDisplayLink;

@end
