@interface IDSAutoCleanup : NSObject {
    id /* block */ _cleanupBlock;
    int _accessCount;
}

- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)incrementAccessCount;

@end
