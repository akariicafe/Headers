@class _PASCFBurstTrie, PPTrialWrapper;

@interface PPTopicAllowlist : NSObject {
    _PASCFBurstTrie *_allowlistTrie;
    PPTrialWrapper *_trialWrapper;
}

+ (id)sharedInstance;
+ (id)_keyFor:(id)a0 of:(id)a1;

- (void)_loadAssetData;
- (void).cxx_destruct;
- (id)initWithTrialWrapper:(id)a0;
- (BOOL)shouldBypassAllowlist:(id)a0;
- (BOOL)_topicIsAllowedForClientProcess:(id)a0 topic:(id)a1;
- (id)indicesOfAllowedTopicsInRecordArray:(id)a0 clientProcess:(id)a1;
- (id)indicesOfAllowedTopicsInScoredTopicArray:(id)a0 clientProcess:(id)a1;
- (id)filterTopicDictionary:(id)a0 clientProcess:(id)a1;

@end
