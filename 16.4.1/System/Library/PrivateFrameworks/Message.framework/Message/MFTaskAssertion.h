@class NSObject, BKSProcessAssertion, EFProcessTransaction;
@protocol OS_dispatch_source;

@interface MFTaskAssertion : NSObject {
    EFProcessTransaction *_transaction;
    BKSProcessAssertion *_assertion;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)log;

- (id)initWithName:(id)a0 preventIdleSleep:(BOOL)a1;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 expiration:(double)a1 preventIdleSleep:(BOOL)a2;
- (BOOL)isValid;
- (void)dealloc;
- (void)cancelTimer;
- (void)invalidate;
- (void).cxx_destruct;

@end
