@class CNCountdownLatch, CNResult, NSMutableArray;

@interface CNDASearchQueryConsumer : NSObject <DASearchQueryConsumer> {
    CNCountdownLatch *_latch;
    NSMutableArray *_results;
}

@property (class, readonly) id /* block */ SuccessfulResults;

@property (readonly) CNResult *result;

- (void).cxx_destruct;
- (void)searchQuery:(id)a0 finishedWithError:(id)a1;
- (void)searchQuery:(id)a0 returnedResults:(id)a1;
- (id)initWithLatch:(id)a0;

@end
