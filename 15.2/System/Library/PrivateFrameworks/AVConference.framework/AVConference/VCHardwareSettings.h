@class NSMutableSet, NSMutableDictionary;

@interface VCHardwareSettings : NSObject {
    int _supportHEVC;
    BOOL _supportVCPEncoderInitialized;
    BOOL _supportVCPEncoder;
    NSMutableDictionary *_hardwareUsageModeSettings;
}

@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property (readonly, nonatomic) BOOL isVideoRenderingSupported;
@property (readonly, nonatomic) NSMutableSet *pixelFormatCollections;

+ (unsigned int)maxRemoteParticipants30fps;
+ (BOOL)limitCameraDownlinkBitrateDuringSharing;
+ (id)supportedVideoPayloads;
+ (unsigned int)screenHeight;
+ (unsigned int)screenWidthForDisplayID:(unsigned int)a0;
+ (BOOL)isSpatialAudioSupported;
+ (BOOL)isDisplayPortrait;
+ (BOOL)isCaptureSIFRPreferred;
+ (BOOL)disableMLScalarDuringSharing;
+ (long long)deviceClass;
+ (float)previewPreferredAspectRatio;
+ (BOOL)supportsHEVCEncoding;
+ (unsigned int)maxActiveScreenEncoders;
+ (BOOL)shouldEnforceScreenFrameRateLimit;
+ (unsigned long long)maxScreenEncodingSizeSupported;
+ (unsigned int)maxFpsCameraCaptureDuringSharing;
+ (BOOL)supportsHEIFEncoding;
+ (unsigned int)maxOneToOneFramerateSupported;
+ (unsigned int)screenWidth;
+ (unsigned int)maxActiveVideoDecoders;
+ (unsigned int)maxMultiwayFramerateSupported;
+ (unsigned int)maxFrameRateSupportedBackgroundBlur;
+ (unsigned int)maxFrameRateSupportedScreenShare;
+ (unsigned int)screenHeightForDisplayID:(unsigned int)a0;
+ (unsigned int)maxActiveVideoEncoders;
+ (long long)screenShareCapabilities;
+ (BOOL)supportsDedicatedSystemAudioStream;
+ (BOOL)supportsHEVCDecoding;
+ (BOOL)supportsPortraitCameraCapture;
+ (BOOL)preferPresentationTimestamp;
+ (BOOL)isVideoRenderingSupported;
+ (BOOL)disableViewPointCorrectionForSharing;
+ (unsigned int)builtinMicCount;
+ (unsigned int)maxVCPSupportedTemporalLayers;

- (id)init;
- (void)dealloc;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)a0 isLowLatencyAudio:(BOOL)a1;
- (BOOL)isHEVCEncodeSupported:(int)a0;
- (BOOL)isHEVCDecodeSupported:(int)a0;
- (unsigned int)tilesPerVideoFrame:(int)a0 hdrMode:(unsigned long long)a1;
- (unsigned int)tilesPerVideoFrame:(int)a0;
- (id)featureListStringForH264:(int)a0;
- (id)featureListStringForHEVC:(int)a0;
- (BOOL)storeHardwareSettingsForAllOperatingModes;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)a0;

@end
