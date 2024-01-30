@interface CCAsyncQueueBlockOperation : NSObject <CCAsyncOperation> {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)performOperationWithCallback:(id /* block */)a0;

@end
