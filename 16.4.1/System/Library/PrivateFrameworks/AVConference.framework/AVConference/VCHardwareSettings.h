@class NSMutableSet, NSMutableDictionary;

@interface VCHardwareSettings : NSObject {
    int _supportHEVC;
    BOOL _supportVCPEncoderInitialized;
    BOOL _supportVCPEncoder;
    NSMutableDictionary *_hardwareUsageModeSettings;
    BOOL _isSiriVoiceTapSupported;
    BOOL _isSiriVoicePlayoutSupported;
}

@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property (readonly, nonatomic) BOOL isVideoRenderingSupported;
@property (readonly, nonatomic) NSMutableSet *pixelFormatCollections;
@property (readonly, nonatomic) BOOL isSiriVoiceTapSupported;
@property (readonly, nonatomic) BOOL isSiriVoicePlayoutSupported;

+ (unsigned int)screenHeight;
+ (unsigned int)screenWidth;
+ (long long)deviceClass;
+ (BOOL)isSpatialAudioSupported;
+ (BOOL)supportsHEVCEncoding;
+ (BOOL)supportsHEIFEncoding;
+ (unsigned int)builtinMicCount;
+ (BOOL)disableMLScalarDuringSharing;
+ (BOOL)disableViewPointCorrectionForSharing;
+ (struct CGPoint { double x0; double x1; })frontCameraOffsetFromDisplayCenter;
+ (BOOL)isCaptionsSupported;
+ (BOOL)isCaptureSIFRPreferred;
+ (BOOL)isCellularTappingSupported;
+ (BOOL)isDisplayPortrait;
+ (BOOL)isSiriVoicePlayoutSupported;
+ (BOOL)isSiriVoiceTapSupported;
+ (BOOL)isVideoRenderingSupported;
+ (BOOL)isViewPointCorrectionSupported;
+ (BOOL)limitCameraDownlinkBitrateDuringSharing;
+ (unsigned int)maxActiveScreenEncoders;
+ (unsigned int)maxActiveVideoDecoders;
+ (unsigned int)maxActiveVideoEncoders;
+ (unsigned int)maxFpsCameraCaptureDuringSharing;
+ (unsigned int)maxFrameRateSupportedBackgroundBlur;
+ (unsigned int)maxFrameRateSupportedScreenShare;
+ (unsigned int)maxMultiwayFramerateSupported;
+ (unsigned int)maxOneToOneFramerateSupported;
+ (unsigned int)maxRemoteParticipants30fps;
+ (unsigned long long)maxScreenEncodingSizeSupported;
+ (unsigned int)maxVCPSupportedTemporalLayers;
+ (BOOL)preferPresentationTimestamp;
+ (double)previewPreferredAspectRatio;
+ (BOOL)retainPixelBufferForMomentsEnabled;
+ (unsigned int)screenHeightForDisplayID:(unsigned int)a0;
+ (long long)screenShareCapabilities;
+ (unsigned int)screenWidthForDisplayID:(unsigned int)a0;
+ (BOOL)shouldEnforceScreenFrameRateLimit;
+ (BOOL)shouldOverrideGPUMuxing;
+ (id)supportedVideoPayloads;
+ (BOOL)supportsDedicatedSystemAudioStream;
+ (BOOL)supportsHEVCDecoding;
+ (BOOL)supportsPortraitCameraCapture;

- (void)dealloc;
- (id)init;
- (id)featureListStringForH264:(int)a0;
- (id)featureListStringForHEVC:(int)a0;
- (BOOL)isHEVCDecodeSupported:(int)a0;
- (BOOL)isHEVCEncodeSupported:(int)a0;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)a0 isLowLatencyAudio:(BOOL)a1;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)a0;
- (BOOL)storeHardwareSettingsForAllOperatingModes;
- (unsigned int)tilesPerVideoFrame:(int)a0;
- (unsigned int)tilesPerVideoFrame:(int)a0 hdrMode:(unsigned long long)a1;

@end
