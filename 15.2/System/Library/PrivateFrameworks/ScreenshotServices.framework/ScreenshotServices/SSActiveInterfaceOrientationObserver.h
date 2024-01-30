@class NSString;
@protocol SSActiveInterfaceOrientationObserverDelegate;

@interface SSActiveInterfaceOrientationObserver : NSObject <SBUIActiveOrientationObserver>

@property (weak, nonatomic) id<SSActiveInterfaceOrientationObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObserving;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)_unregisterForActiveInterfaceOrientationChanges;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)_registerForActiveInterfaceOrientationChanges;
- (id)_sbUIUserAgent;
- (void)_observeActiveInterfaceOrientationChangeToOrientation:(long long)a0 withDuration:(double)a1;
- (void)beginObserving;

@end
