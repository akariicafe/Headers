@class VKBarcodeFrameProcessorConfiguration, NSMutableArray;

@interface VKBarcodeFrameProcessor : VKFrameProcessor {
    VKBarcodeFrameProcessorConfiguration *_config;
    struct { void /* unknown type, empty encoding */ columns[3]; } _warpTransform;
    NSMutableArray *_recognizedItems;
    id /* block */ _resultHandler;
    VKBarcodeFrameProcessorConfiguration *_currentConfig;
}

@property (copy, nonatomic) VKBarcodeFrameProcessorConfiguration *configuration;
@property (copy, nonatomic) id /* block */ resultHandler;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)wantsThrottling;
- (void)applyWarpTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (void)processFrame:(id)a0;

@end
