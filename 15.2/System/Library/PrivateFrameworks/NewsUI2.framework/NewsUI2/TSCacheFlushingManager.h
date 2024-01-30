@interface TSCacheFlushingManager : NSObject <TSCacheFlushingManagerType> {
    void /* unknown type, empty encoding */ cacheFlusher;
    void /* unknown type, empty encoding */ storageLevelProvider;
    void /* unknown type, empty encoding */ preFlushGroup;
}

- (void).cxx_destruct;
- (id)init;
- (void)enableFlushing;
- (void)addPreFlushTask:(id /* block */)a0;
- (id)createPreFlushTask;

@end
