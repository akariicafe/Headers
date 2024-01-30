@interface PLInstrumentedOperationQueue : NSOperationQueue

@property (copy) id /* block */ pl_operationCountChangedBlock;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;

@end
