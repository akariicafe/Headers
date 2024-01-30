@class _PASLock;

@interface ATXBehavioralPredictionsFeatureCache : NSObject {
    _PASLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; })itemForBundleId:(id)a0;
- (void)addItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; })a0 forBundleId:(id)a1;
- (struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; } x2; })itemsForBundleIds:(id)a0;

@end
