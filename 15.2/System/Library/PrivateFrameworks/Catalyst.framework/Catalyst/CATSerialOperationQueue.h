@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}

- (void).cxx_destruct;
- (id)init;
- (void)addOperation:(id)a0;
- (id)debugDescription;

@end
