@class NSString, CLCircularRegion;
@protocol ATXLocationManagerProtocol, ATXModeFeaturizerDelegate, ATXLocationOfInterestManagerProtocol;

@interface ATXModeRoutineFeaturizer : NSObject <ATXModeFeaturizer> {
    id<ATXLocationManagerProtocol, ATXLocationOfInterestManagerProtocol> _locationManager;
    CLCircularRegion *_homeLOIRegion;
    CLCircularRegion *_workLOIRegion;
}

@property double homeLOISearchRadius;
@property double workLOISearchRadius;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopListening;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginListening;
- (id)initWithLocationManager:(id)a0;
- (id)provideFeatures;
- (void)_locationManagerDidEnterRegion:(id)a0;
- (void)_locationManagerDidExitRegion:(id)a0;
- (void)_routineLocationsOfInterestDidChange:(id)a0;
- (void)_updateLOIAndUpdateFeatures;
- (BOOL)isInRegion:(id)a0;
- (void)beginMonitoringForLocation:(id)a0 radius:(double)a1 type:(long long)a2;
- (void)_watchRegionForLOIType:(long long)a0;

@end
