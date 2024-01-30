@class _SRSTSharedState;

@interface _SRSTSharedServer : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ stateMachineObserver;
}

@property (nonatomic, readonly) _SRSTSharedState *currentState;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
