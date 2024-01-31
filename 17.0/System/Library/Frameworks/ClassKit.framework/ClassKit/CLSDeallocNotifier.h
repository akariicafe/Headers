@interface CLSDeallocNotifier : NSObject {
    id /* block */ _block;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDeallocCallbackBlock:(id /* block */)a0;

@end
