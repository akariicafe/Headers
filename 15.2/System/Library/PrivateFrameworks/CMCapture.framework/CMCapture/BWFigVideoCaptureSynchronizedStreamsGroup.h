@class BWFigCaptureSynchronizedStreamsGroup, NSArray, NSDictionary, BWFigVideoCaptureStream;

@interface BWFigVideoCaptureSynchronizedStreamsGroup : NSObject {
    NSArray *_activeStreams;
    NSDictionary *_cameraViewMatricesByPortType;
    NSDictionary *_cameraPoseMatricesByPortType;
    BOOL _readOnly;
    BOOL _atomicMasterSlaveReconfigurationSupported;
    BOOL _masterConfigurationSupported;
    BWFigVideoCaptureStream *_currentMasterStream;
    NSDictionary *_currentSlaveConfigurationsByPortType;
    int _maximumNumberOfSlaveStreamsWithoutFrameSkipping;
    int _maximumNumberOfSlaveStreamsWithFrameProcessingEnabled;
    int _maximumNumberOfEnabledSlaveTimeMachines;
    BOOL _statsMasterHasBeenSet;
}

@property (readonly, nonatomic) BWFigCaptureSynchronizedStreamsGroup *syncGroup;
@property (readonly, nonatomic) NSArray *activePortTypes;
@property (readonly, nonatomic) BOOL minimumMasterToSlaveFrameRateRatioSupported;
@property (readonly, nonatomic) BOOL maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
@property (readonly, nonatomic) BOOL maximumNumberOfSlaveStreamsWithFrameProcessingEnabledSupported;
@property (readonly, nonatomic) NSDictionary *clientBaseZoomFactorsByPortType;
@property (copy, nonatomic) NSDictionary *baseZoomFactorsByPortType;
@property (readonly, nonatomic) BWFigVideoCaptureStream *cameraControlsStatisticsMasterStream;

+ (void)initialize;

- (void)dealloc;
- (int)_getViewAndPoseMatrices;
- (int)_computeBaseZoomFactorsWithOverrides:(id)a0;
- (id)_slaveConfigurationForStream:(id)a0;
- (id)_worldPortType;
- (id)initWithSynchronizedStreamsGroup:(id)a0 activeStreams:(id)a1 readOnly:(BOOL)a2 baseZoomFactorOverrides:(id)a3 error:(int *)a4;
- (id)cameraViewMatrixForPortType:(id)a0;
- (id)cameraPoseMatrixForPortType:(id)a0;
- (int)setMasterStream:(id)a0 allStreams:(id)a1;
- (int)setCameraControlsStatisticsMasterStream:(id)a0;
- (unsigned int)minimumMasterToSlaveFrameRateRatio;
- (void)setMinimumMasterToSlaveFrameRateRatio:(unsigned int)a0;
- (void)setMaximumNumberOfSlaveStreamsWithoutFrameSkipping:(int)a0;
- (void)setMaximumNumberOfSlaveStreamsWithFrameProcessingEnabled:(int)a0;
- (void)setMaximumNumberOfEnabledSlaveTimeMachines:(int)a0;

@end
