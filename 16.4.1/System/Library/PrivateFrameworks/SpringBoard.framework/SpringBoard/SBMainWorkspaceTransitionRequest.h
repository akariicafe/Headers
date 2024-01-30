@class SBMainWorkspace, NSMutableArray;
@protocol SBBannerUnfurlSourceContextProviding;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest {
    NSMutableArray *_completionTasks;
}

@property (readonly, nonatomic) SBMainWorkspace *workspace;
@property (nonatomic) long long source;
@property (nonatomic) BOOL shouldPreventEmergencyNotificationBannerDismissal;
@property (retain, nonatomic) id<SBBannerUnfurlSourceContextProviding> bannerUnfurlSourceContextProvider;
@property (nonatomic) BOOL shouldPreventDismissalOfUnrelatedTransientOverlays;
@property (copy, nonatomic) id /* block */ transactionProvider;
@property (copy, nonatomic) id /* block */ transactionConfigurator;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;

+ (id)ancillaryTransitionRequestsForTransitionRequest:(id)a0;

- (id)addCompletionHandler:(id /* block */)a0;
- (id)initWithDisplayConfiguration:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)finalize;
- (id)copyMainWorkspaceTransitionRequest;
- (void)_invalidateCompletionTasks;
- (BOOL)isMainWorkspaceTransitionRequest;
- (id)_initWithWorkspace:(id)a0 displayConfiguration:(id)a1;
- (void)dealloc;
- (void)declineWithReason:(id)a0;
- (void)modifyTransientOverlayContext:(id /* block */)a0;
- (id)compactDescriptionBuilder;
- (void).cxx_destruct;
- (void)setTransientOverlayContext:(id)a0;

@end
