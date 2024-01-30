@class NSInvocation;

@interface _UIActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)invoke;
- (BOOL)isValid;
- (void)addObserverToRunLoop;
- (id)initWithInvocation:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
