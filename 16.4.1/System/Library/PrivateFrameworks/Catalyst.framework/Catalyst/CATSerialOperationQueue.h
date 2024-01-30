@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}

- (void)addOperation:(id)a0;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;

@end
