@interface InvocationTrampoline : NSObject

@property (retain) id target;

- (void)performInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;

@end
