@class JDJasperModuleCalibrationData, JDCameraCalibrationData;
@protocol JDDepthProcessorDelegate;

@interface JDDepthProcessor : NSObject {
    JDJasperModuleCalibrationData *_moduleCalib;
    JDCameraCalibrationData *_cameraCalib;
    struct JasperAlgo { struct unique_ptr<JasperAlgo::Impl, std::__1::default_delete<JasperAlgo::Impl> > { struct __compressed_pair<JasperAlgo::Impl *, std::__1::default_delete<JasperAlgo::Impl> > { struct Impl *__value_; } __ptr_; } _impl; } _algo;
    struct __CVDataBufferPool { } *_dataBufferPool;
    struct BridgeProvider { void /* function */ **x0; id x1; } *_bridgeProvider;
    id<JDDepthProcessorDelegate> _delegate;
}

@property (readonly) unsigned long long requiredStorageBytesForGeneratedPointClouds;
@property BOOL outputAdditionalEchos;

+ (struct JDFrameConfigOverrides { float x0; })defaultFrameConfigOverrides;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setInternalState:(id)a0;
- (id).cxx_construct;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)getInternalState;
- (id)initWithSystemCalibrationData:(id)a0;
- (void)setGmoProvider:(id)a0;
- (BOOL)setDataBufferPool:(struct __CVDataBufferPool { } *)a0;
- (BOOL)prepareDataPool;
- (BOOL)prepareForJasperPreset:(int)a0;
- (id)generatePointCloudFromRawFrame:(id)a0;
- (id)generateFrameConfigsForPreset:(int)a0 overrides:(struct FrameConfigOverrides { float x0; double x1; } *)a1;
- (id)generateFrameConfigsForPreset:(int)a0 withOptions:(id)a1;
- (id)generateFrameConfigsForPreset:(int)a0 withOverrides:(struct JDFrameConfigOverrides { float x0; } *)a1;
- (void)setGmoDebugMode;
- (void)setGmoFlowBitmap:(unsigned int)a0;
- (void)startNewStatisticsSession;
- (BOOL)reportSessionStatistics;

@end
