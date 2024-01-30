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
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)_routeIsUsable:(id)a0;
- (void)_updateHFPRoute;
- (void)_findUsableRouteWithHandler:(id /* block */)a0;
- (void)_mediaServerConnectionDied;
- (BOOL)_otherAudioIsPlaying;
- (void)_pickableRoutesChanged;
- (void)_registerForObservation;
- (BOOL)_routeIsAirTunes:(id)a0;
- (BOOL)_routeIsBluetooth:(id)a0;
- (BOOL)_routeIsForVehicle:(id)a0;
- (BOOL)_routeIsHFP:(id)a0;
- (BOOL)_routeIsOverride:(id)a0;
- (BOOL)_routeIsWireless:(id)a0;
- (void)_unregisterForObservation;
- (id)initWithHFPEnabled:(BOOL)a0;

@end
