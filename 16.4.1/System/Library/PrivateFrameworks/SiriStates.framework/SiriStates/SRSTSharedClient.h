@class SRSTSharedState, NSString, _SRSTSharedClient;
@protocol SRSTSharedClientDelegate;

@interface SRSTSharedClient : NSObject <_SRSTSharedClientDelegate>

@property (readonly) _SRSTSharedClient *underlyingObject;
@property (weak, nonatomic) id<SRSTSharedClientDelegate> delegate;
@property (readonly, nonatomic) SRSTSharedState *currentState;
@property (readonly, copy, nonatomic) NSString *mostRecentEventName;

- (void)dispatchEvent:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)stateMachineWithClient:(id)a0 didReceiveEvent:(long long)a1;
- (void)stateMachineWithClient:(id)a0 didTransitionToState:(id)a1;
- (void)stopClient;

@end
