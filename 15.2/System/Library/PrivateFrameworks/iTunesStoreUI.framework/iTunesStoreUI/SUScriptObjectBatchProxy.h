@class SUScriptObjectInvocationBatch;

@interface SUScriptObjectBatchProxy : NSObject

@property SUScriptObjectInvocationBatch *invocationBatch;
@property id target;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
