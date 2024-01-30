@interface WBSCleanupHandler : NSObject {
    id /* block */ _block;
}

- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
