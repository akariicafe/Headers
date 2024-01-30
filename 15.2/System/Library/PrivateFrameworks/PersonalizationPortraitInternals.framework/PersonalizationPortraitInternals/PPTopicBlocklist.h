@class _PASCFBurstTrie, PPTrialWrapper;
@protocol TRINotificationToken;

@interface PPTopicBlocklist : NSObject {
    _PASCFBurstTrie *_blocklistTrie;
    PPTrialWrapper *_trialWrapper;
    id<TRINotificationToken> _trialToken;
}

+ (id)sharedInstance;

- (id)indicesOfBlockedTopicsInRecordArray:(id)a0;
- (id)indicesOfBlockedTopicsInScoredTopicArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithTrialWrapper:(id)a0;
- (void)dealloc;
- (BOOL)shouldBlock:(id)a0;

@end
