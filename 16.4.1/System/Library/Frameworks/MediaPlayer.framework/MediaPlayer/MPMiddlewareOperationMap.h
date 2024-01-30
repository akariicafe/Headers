@class NSMapTable, NSMutableArray;

@interface MPMiddlewareOperationMap : NSObject {
    NSMapTable *_middlewareOperationMap;
    NSMutableArray *_middleware;
    NSMutableArray *_operations;
}

+ (id)mapForRequest:(id)a0;

- (id)operationsForMiddleware:(id)a0;
- (id)_init;
- (id)allMiddleware;
- (id)allOperations;
- (void).cxx_destruct;

@end
