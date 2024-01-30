@class NSString;
@protocol BSInvalidatable;

@interface PKIdleTimerAssertion : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _invalidated;
    NSString *_reason;
    id<BSInvalidatable> _idleTimerAssertion;
}

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (id)initWithReason:(id)a0;

@end
