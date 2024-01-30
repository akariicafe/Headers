@class NSMutableDictionary;

@interface CKVSpeechItemRanker_AutoShortcuts : CKVSpeechItemRanker {
    NSMutableDictionary *_datasetDict;
}

- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (BOOL)addDataset:(id)a0;
- (id)datasets;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasDatasets;

@end
