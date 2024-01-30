@class NSMutableArray;

@interface SNTestChain : NSObject

@property (readonly, nonatomic) NSMutableArray *linkBlocks;

- (void)addLink:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (void)popAndRunWithCompletion:(id /* block */)a0 testFailure:(id)a1;

@end
