@class NSMutableArray;

@interface SNTestChain : NSObject

@property (readonly, nonatomic) NSMutableArray *linkBlocks;

- (void)runWithCompletion:(id /* block */)a0;
- (void)popAndRunWithCompletion:(id /* block */)a0 testFailure:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)addLink:(id /* block */)a0;

@end
