@interface PFCancelerObserver : NSObject <PFCancelerObserver> {
    id /* block */ _block;
}

+ (id)observerForCanceler:(id)a0 block:(id /* block */)a1;

- (void)cancelerWasCanceled:(id)a0;
- (id)initWithCanceler:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
