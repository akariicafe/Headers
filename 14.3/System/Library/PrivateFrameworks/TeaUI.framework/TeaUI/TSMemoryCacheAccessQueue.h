@interface TSMemoryCacheAccessQueue : NSObject <TSMemoryCacheAccessorType> {
    void /* unknown type, empty encoding */ accessQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)accessValueWithBlock:(id /* block */)a0;
- (void)accessWithBlock:(id /* block */)a0;

@end
