@class NSString;
@protocol BSInvalidatable;

@interface PKIdleTimerAssertion : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _invalidated;
    NSString *_reason;
    id<BSInvalidatable> _idleTimerAssertion;
}

- (id)initWithReason:(id)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
