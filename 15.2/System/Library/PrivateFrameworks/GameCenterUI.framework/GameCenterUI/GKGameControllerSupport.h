@class NSString;

@interface GKGameControllerSupport : NSObject <GKGameCenterControllerDelegate>

@property (class, readonly, nonatomic) GKGameControllerSupport *shared;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRegisterGameControllers;
- (void)controllerDidConnect:(id)a0;
- (void)setupController:(id)a0;
- (void)showDashboard;
- (void)gameCenterViewControllerDidFinish:(id)a0;
- (void)registerGameControllers;

@end
