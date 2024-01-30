@class NSXPCListener, NSString, ATXHeroAppManager, ATXHeroClipManager, ATXHeroPoiManager, ATXHeroPredictionsTracker, NSObject;
@protocol ATXPETEventTracker2Protocol, OS_dispatch_queue, ATXLocationManagerProtocol;

@interface ATXHeroDataServer : NSObject <ATXHeroDataXPCInterface, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    ATXHeroClipManager *_heroClipManager;
    ATXHeroAppManager *_heroAppManager;
    ATXHeroPoiManager *_heroPoiManager;
    id<ATXPETEventTracker2Protocol> _tracker;
    ATXHeroPredictionsTracker *_predictionsTracker;
    id<ATXLocationManagerProtocol> _locationManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)updateHeroAppManagerAndHeroClipManagerWithPredictions:(id)a0;
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (BOOL)_didPredictionsChange:(id)a0;
- (id)processPredictions:(id)a0;
- (void)_donateHeroAppsToHeroAppManager:(id)a0;
- (void)donatePredictions:(id)a0 shouldOnlyDonateHeroPoiPredictions:(BOOL)a1;
- (id)initWithHeroClipManager:(id)a0 heroAppManager:(id)a1 heroPoiManager:(id)a2 tracker:(id)a3 predictionsTracker:(id)a4 locationManager:(id)a5;
- (void)_addBundleIdsToPredictions:(id)a0;
- (void)dealloc;
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (id)_heroClipPredictionsFromPredictions:(id)a0;
- (id)_heroAppPredictionsFromPredictions:(id)a0;
- (id)_filterPredictions:(id)a0 currentLocation:(id)a1;
- (void)_setExpiry;
- (BOOL)heroAppAndClipPredictionsAreEligibleGivenIsMoving:(BOOL)a0 isNearKnownTypeLOI:(BOOL)a1 isNearFrequentLOI:(BOOL)a2;
- (void)_donateAppClipsToHeroClipManager:(id)a0;
- (BOOL)heroPoiPredictionsAreEligibleGivenIsMoving:(BOOL)a0 isNearKnownTypeLOIExcludingGym:(BOOL)a1 isNearFrequentLOI:(BOOL)a2;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_setPredictionsInDefaults:(id)a0;
- (void)donateHeroAppPredictions:(id)a0 completion:(id /* block */)a1;
- (void)_donatePoiCategoriesToHeroPoiManager:(id)a0;
- (void)openAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addHardRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)getCurrentHeroPoiCategoryWithCompletion:(id /* block */)a0;
- (id)_heroPoiPredictionsFromPredictions:(id)a0;
- (id)initWithHeroClipManager:(id)a0 heroAppManager:(id)a1 tracker:(id)a2;

@end
