@class NSOperationQueue, NSArray;

@interface VSTestSetupPreparationOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSArray *errors;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;
- (void)addError:(id)a0;

@end
