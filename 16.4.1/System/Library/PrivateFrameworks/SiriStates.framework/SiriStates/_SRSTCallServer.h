@class _SRSTCallState;

@interface _SRSTCallServer : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ stateMachineObserver;
}

@property (nonatomic, readonly) _SRSTCallState *currentState;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
