@class NSXPCListener, NSString, ATXHeroAppManager, ATXHeroClipManager, ATXHeroPoiManager, NSObject;
@protocol ATXPETEventTracker2Protocol, OS_dispatch_queue;

@interface ATXHeroDataServer : NSObject <ATXHeroDataXPCInterface, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    ATXHeroClipManager *_heroClipManager;
    ATXHeroAppManager *_heroAppManager;
    ATXHeroPoiManager *_heroPoiManager;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hashedPredictionsForPredictions:(id)a0;

- (void)_donateAppClipsToHeroClipManager:(id)a0;
- (BOOL)_didPredictionsChange:(id)a0;
- (void)donateHeroAppPredictions:(id)a0 completion:(id /* block */)a1;
- (void)updateHeroAppManagerAndHeroClipManagerWithPredictions:(id)a0;
- (id)_filterPredictions:(id)a0 currentLocation:(id)a1;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (id)_heroClipPredictionsFromPredictions:(id)a0;
- (void)_donatePoiCategoriesToHeroPoiManager:(id)a0;
- (id)_heroAppPredictionsFromPredictions:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithHeroClipManager:(id)a0 heroAppManager:(id)a1 heroPoiManager:(id)a2 tracker:(id)a3;
- (void)_addBundleIdsToPredictions:(id)a0;
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)addHardRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithHeroClipManager:(id)a0 heroAppManager:(id)a1 tracker:(id)a2;
- (id)init;
- (void)_setExpiry;
- (void)_donateHeroAppsToHeroAppManager:(id)a0;
- (id)_heroPoiPredictionsFromPredictions:(id)a0;
- (void)_setPredictionsInDefaults:(id)a0;
- (void)openAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)getCurrentHeroPoiCategoryWithCompletion:(id /* block */)a0;

@end
