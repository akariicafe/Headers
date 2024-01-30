@class NSString;
@protocol SSActiveInterfaceOrientationObserverDelegate;

@interface SSActiveInterfaceOrientationObserver : NSObject <SBUIActiveOrientationObserver>

@property (weak, nonatomic) id<SSActiveInterfaceOrientationObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObserving;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)beginObserving;
- (id)_sbUIUserAgent;
- (void)_registerForActiveInterfaceOrientationChanges;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)_observeActiveInterfaceOrientationChangeToOrientation:(long long)a0 withDuration:(double)a1;
- (void)_unregisterForActiveInterfaceOrientationChanges;

@end
