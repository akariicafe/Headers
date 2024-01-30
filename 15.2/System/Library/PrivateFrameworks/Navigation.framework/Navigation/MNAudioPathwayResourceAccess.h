@class NSDictionary, NSObject, MNObserverHashTable;
@protocol OS_dispatch_queue;

@interface MNAudioPathwayResourceAccess : NSObject {
    MNObserverHashTable *_observers;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
}

@property (retain, nonatomic) NSDictionary *hfpRoute;
@property (nonatomic) BOOL enableHFPUse;
@property (nonatomic) BOOL wantsVolumeControl;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_registerForObservation;
- (id)initWithHFPEnabled:(BOOL)a0;
- (void)_updateHFPRoute;
- (void)_mediaServerConnectionDied;
- (void)_pickableRoutesChanged;
- (void)_unregisterForObservation;
- (void)_findUsableRouteWithHandler:(id /* block */)a0;
- (BOOL)_routeIsUsable:(id)a0;
- (BOOL)_otherAudioIsPlaying;
- (BOOL)_routeIsAirTunes:(id)a0;
- (BOOL)_routeIsOverride:(id)a0;
- (BOOL)_routeIsHFP:(id)a0;
- (BOOL)_routeIsForVehicle:(id)a0;
- (BOOL)_routeIsBluetooth:(id)a0;
- (BOOL)_routeIsWireless:(id)a0;

@end
