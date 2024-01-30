@class NSMutableArray;

@interface _SAMetricsSendCompletionsProxy : NSObject {
    NSMutableArray *_blocks;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addBlock:(id /* block */)a0;
- (void)dispatchBlocksWithResult:(long long)a0 error:(id)a1;

@end
