@class NSString;
@protocol FBProcessObserver;

@interface FBProcessObserver : NSObject <FBProcessObserver, FBApplicationProcessObserver> {
    unsigned long long _observerAddress;
    Class _observerClass;
    BOOL _supportsDidExit;
    BOOL _supportsStateDidChange;
    BOOL _supportsApplicationDidExit;
    BOOL _supportsApplicationWillLaunch;
    BOOL _supportsApplicationDidLaunch;
    BOOL _supportsApplicationDebugState;
    int _invalidated;
    int _calledDidExit;
    int _calledWillLaunch;
    int _calledDidLaunch;
}

@property (readonly, weak, nonatomic) id<FBProcessObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)process:(id)a0 stateDidChangeFromState:(id)a1 toState:(id)a2;
- (id)initWithObserver:(id)a0;
- (void)applicationProcessWillLaunch:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)applicationProcessDidExit:(id)a0 withContext:(id)a1;
- (void)applicationProcessDebuggingStateDidChange:(id)a0;
- (void)applicationProcessDidLaunch:(id)a0;
- (void)invalidate;
- (void)processDidExit:(id)a0;

@end
