@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}

- (void)addOperation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;

@end
