@interface IMInvocationTrampoline : NSObject

@property (retain) id target;

- (void)performInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;

@end
