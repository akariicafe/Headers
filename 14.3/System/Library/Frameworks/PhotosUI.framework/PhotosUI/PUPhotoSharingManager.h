@class PLProgressView, NSTimer, NSMutableArray;

@interface PUPhotoSharingManager : NSObject <PLPublishingAgentDelegate> {
    PLProgressView *_publishingProgressView;
    NSTimer *_publishingProgressTimer;
    NSMutableArray *_publishingAgents;
    long long _videoRemakingCount;
    long long _appSuspensionCount;
    long long _networkPromptCount;
    unsigned long long _backgroundTaskIdentifier;
}

@property (nonatomic, getter=isRemaking) BOOL remaking;
@property (readonly, nonatomic) PLProgressView *publishingProgressView;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelPublishing;
- (BOOL)prepareForDismissingForced:(BOOL)a0;
- (void)publishingAgentDidStartRemaking:(id)a0;
- (void)publishingAgentDidEndRemaking:(id)a0 didSucceed:(BOOL)a1;
- (void)publishingAgentWillBeDisplayed:(id)a0;
- (void)publishingAgentDoneButtonClicked:(id)a0;
- (void)publishingAgentCancelButtonClicked:(id)a0;
- (void)publishingAgentDidBeginPublishing:(id)a0;
- (void)_setNetworkPromptShowing:(BOOL)a0;
- (void)publishingAgentDidEndPublishing:(id)a0 error:(id)a1;
- (void)_setFlag:(BOOL)a0 forReferenceCounter:(long long *)a1 performIfChanged:(id /* block */)a2;
- (void)_setDelaysAppSuspend:(BOOL)a0;
- (id)_currentPublishingAgent;
- (void)_schedulePublishingProgressViewUpdate;
- (void)_updatePublishingProgressView:(id)a0;
- (void)_cleanUpPublishingProgressView;
- (void)_addPublishingAgentIfNeeded:(id)a0;
- (void)_removePublishingAgent:(id)a0;

@end
