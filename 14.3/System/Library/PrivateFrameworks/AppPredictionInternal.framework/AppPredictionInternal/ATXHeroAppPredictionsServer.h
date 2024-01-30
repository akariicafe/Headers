@class NSXPCListener, NSString, ATXHeroAppManager, ATXAppClipsManager, NSObject;
@protocol ATXPETEventTracker2Protocol, OS_dispatch_queue;

@interface ATXHeroAppPredictionsServer : NSObject <ATXHeroAppPredictionXPCInterface, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    ATXAppClipsManager *_appClipsManager;
    ATXHeroAppManager *_heroAppManager;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hashedPredictionsForPredictions:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addHardRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)_addBundleIdsToPredictions:(id)a0;
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)_setPredictionsInDefaults:(id)a0;
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)donateHeroAppPredictions:(id)a0 completion:(id /* block */)a1;
- (void)openAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)_setExpiry;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_donateHeroAppsToHeroAppManager:(id)a0;
- (id)_appClipPredictionsFromPredictions:(id)a0;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (id)_filterPredictions:(id)a0 currentLocation:(id)a1;
- (void)_donateAppClipsToAppClipsManager:(id)a0;
- (id)_heroAppPredictionsFromPredictions:(id)a0;
- (id)initWithAppClipsManager:(id)a0 heroAppManager:(id)a1 tracker:(id)a2;
- (void)updateHeroAppManagerAndAppClipsManagerWithPredictions:(id)a0;
- (BOOL)_didPredictionsChange:(id)a0;

@end
