@interface HDMaintenanceOperation : NSOperation {
    double _startedTime;
}

+ (id)maintenanceOperationWithName:(id)a0 queue:(id)a1 synchronousBlock:(id /* block */)a2;
+ (id)maintenanceOperationWithName:(id)a0 asynchronousBlock:(id /* block */)a1;

- (id)init;
- (id)initWithName:(id)a0;
- (void)_operationDidStart;
- (void)_operationDidFinish;

@end
