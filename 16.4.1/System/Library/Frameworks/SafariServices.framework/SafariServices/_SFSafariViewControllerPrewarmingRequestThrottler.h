@class NSMutableDictionary, NSTimer, NSMutableSet, NSHashTable;

@interface _SFSafariViewControllerPrewarmingRequestThrottler : NSObject {
    NSHashTable *_requestedTokens;
    NSHashTable *_prewarmedTokens;
    NSMutableSet *_prewarmedURLs;
    NSMutableDictionary *_tokensByID;
    NSTimer *_requestDelayTimer;
    BOOL _suspended;
}

@property (copy, nonatomic) id /* block */ connectionHandler;
@property (nonatomic) double minimumRequestDelay;
@property (nonatomic) unsigned long long maximumValidConnectionCount;

- (void)suspend;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (id)_URLsToPrewarmForToken:(id)a0;
- (void)_didPartiallyPrewarmToken:(id)a0;
- (void)_didPrewarmToken:(id)a0;
- (id)_nextTokenToPrewarm;
- (void)_performNextRequest;
- (void)_prewarmURLs:(id)a0;
- (id)_prewarmedURLsWithValidTokens;
- (void)_startRequestTimer;
- (void)_stopRequestTimer;
- (void)invalidateTokenWithID:(unsigned long long)a0;
- (void)requestToken:(id)a0;

@end
