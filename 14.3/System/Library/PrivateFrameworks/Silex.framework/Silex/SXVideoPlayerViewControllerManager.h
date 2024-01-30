@class NSMutableDictionary, NSString, SXVolumeProvider, NSURL;

@interface SXVideoPlayerViewControllerManager : NSObject <SXVideoPlayerViewControllerProvider>

@property (readonly, nonatomic) SXVolumeProvider *volumeProvider;
@property (copy, nonatomic) NSURL *autoplayURL;
@property (readonly, nonatomic) NSMutableDictionary *videoAnalyticsRouters;
@property (readonly, nonatomic) NSMutableDictionary *visibilityMonitors;
@property (readonly, nonatomic) NSMutableDictionary *videoPlayerViewControllers;
@property (readonly, nonatomic) NSMutableDictionary *loseOwnershipBlocks;
@property (readonly, nonatomic) NSMutableDictionary *pendingVideoPlayerViewControllers;
@property (readonly, nonatomic) NSMutableDictionary *pendingLoseOwnershipBlocks;
@property (readonly, nonatomic) NSMutableDictionary *pendingReceiveOwnershipBlocks;
@property (nonatomic) BOOL presentedAndAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureAutoplayForVideoWithURL:(id)a0 analyticsRouter:(id)a1;
- (void)registerExistingVideoPlayerViewController:(id)a0 URL:(id)a1 analyticsRouter:(id)a2 videoPlayerVisibilityMonitor:(id)a3 loseOwnershipBlock:(id /* block */)a4;
- (id)videoPlayerViewControllerForURL:(id)a0 receiveOwnershipBlock:(id /* block */)a1;
- (id)initWithVolumeProvider:(id)a0;

@end
