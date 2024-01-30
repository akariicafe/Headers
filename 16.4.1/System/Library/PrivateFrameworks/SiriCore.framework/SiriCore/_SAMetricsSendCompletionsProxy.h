@class NSMutableArray;

@interface _SAMetricsSendCompletionsProxy : NSObject {
    NSMutableArray *_blocks;
}

- (void)dealloc;
- (void)addBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dispatchBlocksWithResult:(long long)a0 error:(id)a1;

@end
