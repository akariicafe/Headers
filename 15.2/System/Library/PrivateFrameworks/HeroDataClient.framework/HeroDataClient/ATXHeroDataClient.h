@class NSXPCConnection;

@interface ATXHeroDataClient : NSObject <ATXHeroDataXPCInterface> {
    NSXPCConnection *_xpcConnection;
}

- (void)donateHeroAppPredictions:(id)a0 completion:(id /* block */)a1;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)addHardRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)openAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)getCurrentHeroPoiCategoryWithCompletion:(id /* block */)a0;

@end
