@class SUScriptObjectInvocationBatch;

@interface SUScriptObjectBatchProxy : NSObject

@property SUScriptObjectInvocationBatch *invocationBatch;
@property id target;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
