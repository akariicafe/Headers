@class _SRSTCallClient, SRSTCallState, NSString;
@protocol SRSTCallClientDelegate;

@interface SRSTCallClient : NSObject <_SRSTCallClientDelegate>

@property (readonly) _SRSTCallClient *underlyingObject;
@property (weak, nonatomic) id<SRSTCallClientDelegate> delegate;
@property (readonly, nonatomic) SRSTCallState *currentState;
@property (readonly, copy, nonatomic) NSString *mostRecentEventName;

- (void)dispatchEvent:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)stateMachineWithClient:(id)a0 didReceiveEvent:(long long)a1;
- (void)stateMachineWithClient:(id)a0 didTransitionToState:(id)a1;
- (void)stopClient;

@end
