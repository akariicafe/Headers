@class SRSTState;

@interface SRSTServer : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ stateMachineObserver;
}

@property (nonatomic, readonly) SRSTState *currentState;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
