@class NSInvocation;

@interface _UIActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

- (id)initWithInvocation:(id)a0;
- (void)invoke;
- (void)addObserverToRunLoop;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (BOOL)isValid;

@end
