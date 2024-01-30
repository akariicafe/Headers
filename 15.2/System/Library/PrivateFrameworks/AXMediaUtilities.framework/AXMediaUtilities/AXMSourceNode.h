@class NSMutableArray;

@interface AXMSourceNode : AXMVisionEngineNode <NSSecureCoding> {
    NSMutableArray *_nodeQueue_resultHandlers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldProcessRemotely;

- (void).cxx_destruct;
- (void)nodeInitialize;
- (void)produceImage:(id)a0;
- (void)triggerWithContext:(id)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;
- (id)resultHandlers;
- (void)addResultHandler:(id /* block */)a0;
- (void)removeResultHandler:(id /* block */)a0;
- (void)removeAllResultHandlers;
- (void)_nodeQueue_addResultHandler:(id /* block */)a0;
- (void)_nodeQueue_removeResultHandler:(id /* block */)a0;
- (void)_nodeQueue_removeAllResultHandlers;

@end
