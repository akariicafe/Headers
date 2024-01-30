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

- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (void)requestToken:(id)a0;
- (void)invalidateTokenWithID:(unsigned long long)a0;
- (id)_URLsToPrewarmForToken:(id)a0;
- (void)_didPrewarmToken:(id)a0;
- (void)_stopRequestTimer;
- (void)_startRequestTimer;
- (void)_performNextRequest;
- (id)_nextTokenToPrewarm;
- (id)_prewarmedURLsWithValidTokens;
- (void)_prewarmURLs:(id)a0;
- (void)_didPartiallyPrewarmToken:(id)a0;

@end
