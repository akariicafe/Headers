@class BKSProcessAssertion, NSObject;
@protocol OS_dispatch_source;

@interface MFTaskAssertion : NSObject {
    BKSProcessAssertion *_assertion;
    NSObject<OS_dispatch_source> *_timer;
}

- (void)dealloc;
- (void)cancelTimer;
- (BOOL)isValid;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 expiration:(double)a1 preventIdleSleep:(BOOL)a2;
- (id)initWithName:(id)a0 preventIdleSleep:(BOOL)a1;
- (void)invalidate;

@end
