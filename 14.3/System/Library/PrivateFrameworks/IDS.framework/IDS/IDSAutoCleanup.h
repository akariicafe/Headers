@interface IDSAutoCleanup : NSObject {
    id /* block */ _cleanupBlock;
    int _accessCount;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)incrementAccessCount;
- (id)initWithBlock:(id /* block */)a0;

@end
