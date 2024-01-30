@interface CKVSimulatedMultiDatasetBridge : NSObject <KMProviderMultiDatasetBridge> {
    unsigned short _task;
}

- (id)initWithTask:(unsigned short)a0;
- (id)init;
- (id)profileFileName;
- (id)_createDatasetInfoSummary:(long long)a0 withOriginAppId:(id)a1;
- (id)datasetInfoSummaryListForTask;
- (void)enumerateAllDatasets:(unsigned long long *)a0 usingBlock:(id /* block */)a1;
- (id)profileDirectory;

@end
