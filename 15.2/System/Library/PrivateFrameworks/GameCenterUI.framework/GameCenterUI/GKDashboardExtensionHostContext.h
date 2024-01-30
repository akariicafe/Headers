@class NSString, GKGame;

@interface GKDashboardExtensionHostContext : GKExtensionHostContext <GKGameCenterDashboardHostProtocol>

@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)requestImagesForLeaderboardsInSet:(id)a0 handler:(id /* block */)a1;
- (void)requestImagesForLeaderboardSetsWithHandler:(id /* block */)a0;
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(id /* block */)a0;
- (void)requestDashboardLogoImageWithHandler:(id /* block */)a0;

@end
