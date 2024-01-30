@class AMSURLSession;

@interface AMSURLDelegateProxy : NSObject

@property (readonly, weak, nonatomic) AMSURLSession *session;
@property (weak, nonatomic) id delegate;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)invalidate;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithSession:(id)a0 delegate:(id)a1;

@end
