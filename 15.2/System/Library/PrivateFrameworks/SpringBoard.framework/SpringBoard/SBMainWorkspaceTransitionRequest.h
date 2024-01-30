@class SBMainWorkspace;
@protocol SBBannerUnfurlSourceContextProviding;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest

@property (readonly, nonatomic) SBMainWorkspace *workspace;
@property (nonatomic) long long source;
@property (nonatomic) BOOL shouldPreventEmergencyNotificationBannerDismissal;
@property (retain, nonatomic) id<SBBannerUnfurlSourceContextProviding> bannerUnfurlSourceContextProvider;
@property (copy, nonatomic) id /* block */ transactionProvider;
@property (copy, nonatomic) id /* block */ transactionConfigurator;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id)initWithDisplayConfiguration:(id)a0;
- (id)_initWithWorkspace:(id)a0 displayConfiguration:(id)a1;
- (void)finalize;
- (void).cxx_destruct;
- (id)compactDescriptionBuilder;
- (void)declineWithReason:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyMainWorkspaceTransitionRequest;
- (BOOL)isMainWorkspaceTransitionRequest;
- (void)setTransientOverlayContext:(id)a0;

@end
