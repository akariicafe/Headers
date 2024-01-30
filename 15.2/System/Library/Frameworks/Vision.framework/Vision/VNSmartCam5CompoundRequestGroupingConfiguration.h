@class NSMutableSet, NSMutableDictionary;

@interface VNSmartCam5CompoundRequestGroupingConfiguration : NSObject {
    unsigned long long _imageCropAndScaleOption;
    NSMutableSet *_originalRequests;
    NSMutableDictionary *_detectorConfigurationOptions;
}

- (BOOL)preferBackgroundProcessing;
- (void)addOriginalRequest:(id)a0;
- (id)initWithImageCropAndScaleOption:(unsigned long long)a0;
- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)detectorConfigurationOptions;
- (id)processingDevice;
- (id)originalRequests;
- (unsigned long long)imageCropAndScaleOption;

@end
