@interface CCAsyncQueueBlockOperation : NSObject <CCAsyncOperation> {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performOperationWithCallback:(id /* block */)a0;

@end
