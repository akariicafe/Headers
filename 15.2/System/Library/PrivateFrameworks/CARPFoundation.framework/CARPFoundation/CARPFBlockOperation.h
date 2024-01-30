@class NSArray;

@interface CARPFBlockOperation : CARPFOperation

@property (readonly, copy) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (id)initWithTimeout:(double)a0;
- (void)main;
- (void).cxx_destruct;
- (void)addExecutionBlock:(id /* block */)a0;

@end
