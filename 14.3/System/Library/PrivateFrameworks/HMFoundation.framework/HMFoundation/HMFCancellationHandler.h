@interface HMFCancellationHandler : HMFObject <HMFCancellable> {
    id /* block */ _block;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
