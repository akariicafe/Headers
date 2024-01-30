@class NSArray, VKTextFrameProcessorConfiguration, NSMutableArray;

@interface VKTextFrameProcessor : VKFrameProcessor {
    BOOL _wantsThrottling;
    VKTextFrameProcessorConfiguration *_config;
    struct { void /* unknown type, empty encoding */ columns[3]; } _warpTransform;
    NSMutableArray *_recognizedItems;
    id /* block */ _resultHandler;
    VKTextFrameProcessorConfiguration *_currentConfig;
    unsigned long long _dataType;
}

@property (class, readonly, nonatomic) NSArray *supportedRecognitionLanguages;

@property (copy, nonatomic) VKTextFrameProcessorConfiguration *configuration;
@property (copy, nonatomic) id /* block */ resultHandler;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)wantsThrottling;
- (void)applyHomographyWarpTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (void)processFrame:(id)a0;
- (void)setWantsThrottling:(BOOL)a0;

@end
