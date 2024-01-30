@class _PASCFBurstTrie, PPTrialWrapper;

@interface PPTopicBlocklist : NSObject {
    _PASCFBurstTrie *_blocklistTrie;
    PPTrialWrapper *_trialWrapper;
}

+ (id)sharedInstance;

- (void)_loadAssetData;
- (void).cxx_destruct;
- (id)initWithTrialWrapper:(id)a0;
- (BOOL)shouldBlock:(id)a0;
- (id)indicesOfBlockedTopicsInRecordArray:(id)a0;
- (id)indicesOfBlockedTopicsInScoredTopicArray:(id)a0;

@end
