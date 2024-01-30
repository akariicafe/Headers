@class NSInvocation, NSException;

@interface NSInvocationOperation : NSOperation {
    NSInvocation *_inv;
    NSException *_exception;
}

@property (readonly, retain) NSInvocation *invocation;
@property (readonly, retain) id result;

- (id)initWithInvocation:(id)a0;
- (void)main;
- (id)init;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)dealloc;

@end
