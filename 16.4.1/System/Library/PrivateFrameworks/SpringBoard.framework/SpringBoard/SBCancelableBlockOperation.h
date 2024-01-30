@class NSMutableArray;

@interface SBCancelableBlockOperation : NSOperation {
    NSMutableArray *_blocks;
}

- (void)main;
- (void)addBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
