@interface PUPhotoKitMediaProviderDownloadSimulation : NSObject

@property (readonly, nonatomic) double _updateInterval;
@property (nonatomic, setter=_setSimulatedProgress:) double _simulatedProgress;
@property (nonatomic) BOOL shouldSimulateFailure;
@property (nonatomic) double downloadDuration;

- (id)init;
- (void)beginSimulation;
- (void)_updateSimulatedDownload;
- (void)endSimulationWithError:(id)a0;
- (void)updateSimulationWithProgress:(double)a0;

@end
