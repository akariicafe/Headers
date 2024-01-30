@class PRSService, NSMutableSet, NSObject, VCPMediaAnalysisService;
@protocol OS_os_log, OS_dispatch_queue;

@interface PHAWallpaperSuggestionUpgradeSession : NSObject {
    PRSService *_posterService;
    VCPMediaAnalysisService *_mediaAnalysisService;
    NSObject<OS_os_log> *_loggingConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_upgradeSessions;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)beginUpgradeSessionAtURL:(id)a0;
- (BOOL)endUpgradeSessionAtURL:(id)a0;
- (void)fetchPosterConfigurationWithAssetDirectory:(id)a0 completion:(id /* block */)a1;
- (void)refreshPosterConfiguration:(id)a0 withSessionURL:(id)a1 completion:(id /* block */)a2;
- (void)upgradePosterConfiguration:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)upgradePosterConfiguration:(id)a0 withSessionURL:(id)a1 localIdentifier:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)upgradePosterConfiguration:(id)a0 withSessionURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)upgradePosterConfigurationWithAssetDirectory:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)upgradeSessionURLForPosterConfiguration:(id)a0;

@end
