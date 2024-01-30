@interface PFCancelerObserver : NSObject <PFCancelerObserver> {
    id /* block */ _block;
}

+ (id)observerForCanceler:(id)a0 block:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)cancelerWasCanceled:(id)a0;
- (id)initWithCanceler:(id)a0 block:(id /* block */)a1;

@end
