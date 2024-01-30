@class NSXPCConnection;

@interface ATXHeroAppPredictionClient : NSObject <ATXHeroAppPredictionXPCInterface> {
    NSXPCConnection *_xpcConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addHardRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)donateHeroAppPredictions:(id)a0 completion:(id /* block */)a1;
- (void)openAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;

@end
