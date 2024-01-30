@interface TSCacheFlushingManager : NSObject <TSCacheFlushingManagerType> {
    void /* unknown type, empty encoding */ cacheFlusher;
    void /* unknown type, empty encoding */ storageLevelProvider;
    void /* unknown type, empty encoding */ preFlushGroup;
}

- (id)init;
- (void)addPreFlushTask:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enableFlushing;
- (id)createPreFlushTask;

@end
