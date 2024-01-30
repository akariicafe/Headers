@interface TPSSearchItemIndexer : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ fetchState;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_indexer;
}

@property (class, nonatomic, readonly) TPSSearchItemIndexer *default;

- (id)initWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)deleteAllWithCompletionHandler:(id /* block */)a0;
- (void)indexWithTips:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (void)reindexWithTips:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;

@end
