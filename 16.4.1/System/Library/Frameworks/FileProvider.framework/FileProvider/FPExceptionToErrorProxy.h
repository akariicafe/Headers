@interface FPExceptionToErrorProxy : NSObject

@property (copy, nonatomic) id /* block */ unhandledExceptionHandler;
@property (copy, nonatomic) id target;

- (id)errorFromException:(id)a0 whileSendingToSelector:(SEL)a1;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithTarget:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
