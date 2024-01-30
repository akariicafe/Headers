@interface _EFBlockObserver : EFObserver {
    id /* block */ _resultBlock;
    id /* block */ _completionBlock;
    id /* block */ _failureBlock;
}

- (void).cxx_destruct;
- (id)initWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)a0;
- (void)observerDidReceiveResult:(id)a0;

@end
