@class JDJasperModuleCalibrationData, JDCameraCalibrationData;
@protocol JDDepthProcessorDelegate;

@interface JDDepthProcessor : NSObject {
    JDJasperModuleCalibrationData *_moduleCalib;
    JDCameraCalibrationData *_cameraCalib;
    struct JasperAlgo { struct unique_ptr<JasperAlgo::Impl, std::default_delete<JasperAlgo::Impl>> { struct __compressed_pair<JasperAlgo::Impl *, std::default_delete<JasperAlgo::Impl>> { struct Impl *__value_; } __ptr_; } _impl; } _algo;
    struct __CVDataBufferPool { } *_dataBufferPool;
    struct BridgeProvider { void /* function */ **x0; id x1; int x2; } *_bridgeProvider;
    id<JDDepthProcessorDelegate> _delegate;
}

@property (readonly) unsigned long long requiredStorageBytesForGeneratedPointClouds;
@property BOOL outputAdditionalEchos;

+ (int)resolvePreset:(int)a0;
+ (struct JDFrameConfigOverrides { float x0; })defaultFrameConfigOverrides;

- (void)setInternalState:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)delegate;
- (void)dealloc;
- (id).cxx_construct;
- (id)getInternalState;
- (id)initWithSystemCalibrationData:(id)a0;
- (void)setGmoProvider:(id)a0;
- (BOOL)setDataBufferPool:(struct __CVDataBufferPool { } *)a0;
- (BOOL)prepareDataPool;
- (BOOL)prepareForJasperPreset:(int)a0;
- (id)generatePointCloudFromRawFrame:(id)a0;
- (id)generatePointCloudFromRawFrame:(id)a0 usingDataBuffer:(struct __CVBuffer { } *)a1;
- (id)generateFrameConfigsForPreset:(int)a0 overrides:(struct FrameConfigOverrides { float x0; double x1; BOOL x2; BOOL x3; BOOL x4; int x5; } *)a1;
- (id)generateFrameConfigsForPreset:(int)a0 withOptions:(id)a1;
- (id)generateFrameConfigsForPreset:(int)a0 withOverrides:(struct JDFrameConfigOverrides { float x0; } *)a1;
- (void)setGmoDebugMode;
- (void)setGmoFlowBitmap:(unsigned int)a0;
- (void)startNewStatisticsSession;
- (BOOL)reportSessionStatistics;

@end
