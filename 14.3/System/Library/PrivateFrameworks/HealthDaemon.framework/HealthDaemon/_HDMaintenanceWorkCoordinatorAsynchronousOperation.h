@interface _HDMaintenanceWorkCoordinatorAsynchronousOperation : HDMaintenanceOperation {
    id /* block */ _operationBlock;
}

@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isAsynchronous;
- (void)start;
- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
