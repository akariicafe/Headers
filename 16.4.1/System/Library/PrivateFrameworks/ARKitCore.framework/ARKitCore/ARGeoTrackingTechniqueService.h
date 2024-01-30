@class NSString, ARLocationData, ARDeviceOrientationData;

@interface ARGeoTrackingTechniqueService : ARTechniqueService <ARRemoteGeoTrackingTechniqueService> {
    ARLocationData *_lastProcessedLocationData;
    ARDeviceOrientationData *_lastProcessedDeviceOrientationData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;

- (id)initWithConnection:(id)a0;
- (id)processData:(id)a0;
- (void).cxx_destruct;
- (void)setSupportEnablementOptions:(unsigned long long)a0;
- (void)setVisualLocalizationCallInterval:(double)a0;
- (void)getLocationFromWorldPosition:(id)a0 reply:(id /* block */)a1;
- (void)posteriorVisualLocalizationCallIntervalWithReply:(id /* block */)a0;
- (id)processDeviceOrientationData:(id)a0;
- (id)processLocationData:(id)a0;
- (void)setPosteriorVisualLocalizationCallInterval:(double)a0;
- (void)setVisualLocalizationCallIntervalTimeThreshold:(double)a0;
- (void)setVisualLocalizationUpdatesRequested:(BOOL)a0;
- (void)supportEnablementOptionsWithReply:(id /* block */)a0;
- (void)technique:(id)a0 didOutputResultData:(id)a1 timestamp:(double)a2 context:(id)a3;
- (void)visualLocalizationCallIntervalTimeThresholdWithReply:(id /* block */)a0;
- (void)visualLocalizationCallIntervalWithReply:(id /* block */)a0;
- (void)visualLocalizationUpdatesRequestedWithReply:(id /* block */)a0;

@end
