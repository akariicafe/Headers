@class SBMainWorkspace;
@protocol SBBannerUnfurlSourceContextProviding;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest

@property (readonly, nonatomic) SBMainWorkspace *workspace;
@property (nonatomic) long long source;
@property (nonatomic) BOOL shouldPreventEmergencyNotificationBannerDismissal;
@property (nonatomic) BOOL shouldPreventAutoPiP;
@property (retain, nonatomic) id<SBBannerUnfurlSourceContextProviding> bannerUnfurlSourceContextProvider;
@property (copy, nonatomic) id /* block */ transactionProvider;
@property (copy, nonatomic) id /* block */ transactionConfigurator;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (void)setTransientOverlayContext:(id)a0;
- (id)copyMainWorkspaceTransitionRequest;
- (void)declineWithReason:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)compactDescriptionBuilder;
- (id)_initWithWorkspace:(id)a0 displayConfiguration:(id)a1;
- (void)finalize;
- (id)initWithDisplayConfiguration:(id)a0;
- (BOOL)isMainWorkspaceTransitionRequest;

@end
