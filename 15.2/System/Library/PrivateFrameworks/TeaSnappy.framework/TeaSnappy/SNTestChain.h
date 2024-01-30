@class NSMutableArray;

@interface SNTestChain : NSObject

@property (readonly, nonatomic) NSMutableArray *linkBlocks;

- (void)popAndRunWithCompletion:(id /* block */)a0 testFailure:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)runWithCompletion:(id /* block */)a0;
- (void)addLink:(id /* block */)a0;

@end
