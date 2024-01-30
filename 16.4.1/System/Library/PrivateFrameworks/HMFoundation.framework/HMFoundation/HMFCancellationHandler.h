@interface HMFCancellationHandler : HMFObject <HMFCancellable> {
    id /* block */ _block;
}

- (void)cancel;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
