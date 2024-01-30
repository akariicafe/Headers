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

- (id)initWithInvocation:(id)a0;
- (void)schedule;
- (void).cxx_destruct;
- (void)_adjustInvocationForPhase:(unsigned long long)a0;
- (void)_repeatedTimerFire;
- (void)_invocationTimerFire;
- (void)_preInvocationTimerFire;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (BOOL)invoke;
- (void)scheduleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)invalidate;

@end
