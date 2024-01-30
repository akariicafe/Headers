@interface _HDMaintenanceWorkCoordinatorAsynchronousOperation : HDMaintenanceOperation {
    id /* block */ _operationBlock;
}

@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;

- (BOOL)isAsynchronous;
- (void)start;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1;

@end
