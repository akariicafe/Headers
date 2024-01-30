@class CAMCaptureEngine, AVCaptureDeviceInput, AVCaptureDeviceFormat, AVCaptureDevice, CAMMemoizationCache;

@interface CAMCaptureEngineDevice : NSObject

@property (readonly, weak, nonatomic) CAMCaptureEngine *_captureEngine;
@property (readonly, nonatomic) CAMMemoizationCache *_videoDeviceFormatForVideoConfiguration;
@property (readonly, nonatomic) CAMMemoizationCache *_videoSessionPresetForVideoConfiguration;
@property (readonly, nonatomic) AVCaptureDeviceFormat *_cachedPanoramaDeviceFormat;
@property (readonly, nonatomic) AVCaptureDeviceFormat *_cachedPortraitDeviceFormat;
@property (readonly, nonatomic) AVCaptureDevice *captureDevice;
@property (readonly, nonatomic) AVCaptureDeviceInput *captureDeviceInput;

- (void).cxx_destruct;
- (id)_portraitModeSessionPreset;
- (id)_panoramaDeviceFormatForConfiguration:(id)a0;
- (id)_highestQualityDeviceFormatForVideoConfiguration:(long long)a0 videoEncodingBehavior:(long long)a1 enableHDR10BitVideo:(BOOL)a2;
- (id)_timelapseSessionPreset;
- (id)_portraitModeDeviceFormat;
- (id)_highestQualitySessionPresetForVideoConfiguration:(long long)a0 videoEncodingBehavior:(long long)a1 enableHDR10BitVideo:(BOOL)a2;
- (id)videoDeviceFormatForGraphConfiguration:(id)a0;
- (id)initWithEngine:(id)a0 captureDevice:(id)a1;
- (id)videoDevicePresetForGraphConfiguration:(id)a0;
- (id)_keyForVideoConfiguration:(long long)a0 videoEncodingBehavior:(long long)a1 enableHDR10BitVideo:(BOOL)a2;

@end
