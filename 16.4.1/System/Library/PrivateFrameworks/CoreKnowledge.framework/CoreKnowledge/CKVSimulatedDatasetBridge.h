@class NSString, KVDataset;

@interface CKVSimulatedDatasetBridge : NSObject <KMProviderDatasetBridge> {
    KVDataset *_dataset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)itemType;
- (id)init;
- (id)originAppId;
- (void).cxx_destruct;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithDataset:(id)a0;

@end
