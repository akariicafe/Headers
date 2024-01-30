@class NSMutableDictionary;
@protocol RBTimeProviding;

@interface RBLaunchTracker : NSObject {
    NSMutableDictionary *_lastLaunch;
    NSMutableDictionary *_launchBeforeLast;
    id<RBTimeProviding> _timeProvider;
}

- (void)trackLaunchOfIdentity:(id)a0;
- (id)initWithTimeProvider:(id)a0;
- (void).cxx_destruct;
- (double)nextAllowedLaunchOfIdentity:(id)a0;

@end
