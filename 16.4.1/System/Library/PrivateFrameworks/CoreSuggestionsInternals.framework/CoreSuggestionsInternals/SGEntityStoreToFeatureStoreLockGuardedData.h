@class SGMIFeatureStore;

@interface SGEntityStoreToFeatureStoreLockGuardedData : NSObject {
    SGMIFeatureStore *_sgmiFeatureStore;
}

- (id)sgmiFeatureStore;
- (void).cxx_destruct;
- (void)setSgmiFeatureStore:(id)a0;

@end
