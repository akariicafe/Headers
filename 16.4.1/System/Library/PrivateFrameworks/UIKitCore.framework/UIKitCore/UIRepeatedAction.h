@class NSTimer, NSInvocation, NSObject;
@protocol UIRepeatedActionDelegate;

@interface UIRepeatedAction : NSObject {
    BOOL _didCompletePreInvocationDelay;
    BOOL _didCompleteInvocationDelay;
}

@property (retain, nonatomic) NSInvocation *invocation;
@property (retain, nonatomic) id invocationArgument;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double preInvocationDelay;
@property (nonatomic) double invocationDelay;
@property (nonatomic) double repeatedDelay;
@property (nonatomic) BOOL disableRepeat;
@property (nonatomic) BOOL skipInitialFire;
@property (weak, nonatomic) NSObject<UIRepeatedActionDelegate> *delegate;

+ (id)_invocationForTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
+ (id)actionWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (BOOL)invoke;
- (void)schedule;
- (void)dealloc;
- (id)initWithInvocation:(id)a0;
- (void)_resetInternalState;
- (void)invalidate;
- (void).cxx_destruct;
- (void)reset;
- (void)_adjustInvocationForPhase:(unsigned long long)a0;
- (void)_invocationTimerFire;
- (void)_preInvocationTimerFire;
- (void)_repeatedTimerFire;
- (BOOL)_shouldInvokeRepeatedActionForPhase:(unsigned long long)a0;
- (void)scheduleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

@end
