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

- (BOOL)prepareForDismissingForced:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)publishingAgentWillBeDisplayed:(id)a0;
- (void)_addPublishingAgentIfNeeded:(id)a0;
- (void)_cleanUpPublishingProgressView;
- (id)_currentPublishingAgent;
- (void)_removePublishingAgent:(id)a0;
- (void)_schedulePublishingProgressViewUpdate;
- (void)_setDelaysAppSuspend:(BOOL)a0;
- (void)_setFlag:(BOOL)a0 forReferenceCounter:(long long *)a1 performIfChanged:(id /* block */)a2;
- (void)_setNetworkPromptShowing:(BOOL)a0;
- (void)_updatePublishingProgressView:(id)a0;
- (void)cancelPublishing;
- (void)publishingAgentCancelButtonClicked:(id)a0;
- (void)publishingAgentDidBeginPublishing:(id)a0;
- (void)publishingAgentDidEndPublishing:(id)a0 error:(id)a1;
- (void)publishingAgentDidEndRemaking:(id)a0 didSucceed:(BOOL)a1;
- (void)publishingAgentDidStartRemaking:(id)a0;
- (void)publishingAgentDoneButtonClicked:(id)a0;

@end
