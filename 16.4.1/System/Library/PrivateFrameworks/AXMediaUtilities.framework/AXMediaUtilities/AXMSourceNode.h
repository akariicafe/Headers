@class NSMutableArray;

@interface AXMSourceNode : AXMVisionEngineNode <NSSecureCoding> {
    NSMutableArray *_nodeQueue_resultHandlers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldProcessRemotely;

- (void).cxx_destruct;
- (void)_nodeQueue_removeResultHandler:(id /* block */)a0;
- (void)_nodeQueue_addResultHandler:(id /* block */)a0;
- (void)_nodeQueue_removeAllResultHandlers;
- (void)addResultHandler:(id /* block */)a0;
- (void)nodeInitialize;
- (void)produceImage:(id)a0;
- (void)removeAllResultHandlers;
- (void)removeResultHandler:(id /* block */)a0;
- (id)resultHandlers;
- (void)triggerWithContext:(id)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;

@end
