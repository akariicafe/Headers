@class NSString, NSArray;

@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol> {
    NSString *_deviceName;
    long long _chipId;
    int _deviceClass;
    int _screenWidth;
    int _screenHeight;
    unsigned long long _maxScreenEncodingSizeSupported;
    long long _videoEncoderType;
    BOOL _hasBasebandInitialized;
    BOOL _hasBaseband;
    BOOL _hasAppleNeuralEngine;
    NSString *_marketingName;
    int _productType;
}

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasBaseband;
@property (readonly, nonatomic) unsigned int screenWidth;
@property (readonly, nonatomic) unsigned int screenHeight;
@property (readonly, nonatomic) unsigned long long maxScreenEncodingSizeSupported;
@property (readonly, nonatomic) unsigned int maxActiveScreenEncoders;
@property (readonly, nonatomic) unsigned int maxFrameRateSupportedScreenShare;
@property (readonly, nonatomic) BOOL shouldEnforceScreenFrameRateLimit;
@property (readonly, nonatomic) long long deviceClass;
@property (readonly, nonatomic) long long chipId;
@property (readonly, nonatomic) long long videoEncoderType;
@property (readonly, nonatomic) BOOL useSoftFramerateSwitching;
@property (readonly, nonatomic) BOOL hasAppleNeuralEngine;
@property (readonly, nonatomic) unsigned int audioPacketLossConcealmentAlgorithmAACELD;
@property (readonly, nonatomic) BOOL isSecondDisplaySupportEnabled;
@property (readonly, nonatomic) BOOL canDo1080p;
@property (readonly, nonatomic) BOOL isHEVC444DecodeSupported;
@property (readonly, nonatomic) BOOL isDisplayPortrait;
@property (readonly, nonatomic) BOOL isCaptureSIFRPreferred;
@property (readonly, nonatomic) long long screenShareCapabilities;
@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property (readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property (readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property (readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property (readonly, nonatomic) BOOL supportsMultiway720pStream;
@property (readonly, nonatomic) BOOL isDeviceLargeScreen;
@property (readonly, nonatomic) BOOL supportsHEIFEncoding;
@property (readonly, nonatomic) BOOL isPixelFormatAvailable;
@property (readonly, nonatomic) BOOL isSpatialAudioSupported;
@property (readonly, nonatomic) NSArray *supportedVideoPayloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (long long)deviceClass;

- (unsigned int)maxRemoteParticipants30fps;
- (BOOL)limitCameraDownlinkBitrateDuringSharing;
- (unsigned int)screenWidthForDisplayID:(unsigned int)a0;
- (BOOL)disableMLScalarDuringSharing;
- (float)previewPreferredAspectRatio;
- (BOOL)isSpatialAudioSupportedIPhone;
- (id)marketingName;
- (unsigned int)maxFpsCameraCaptureDuringSharing;
- (unsigned int)maxOneToOneFramerateSupported;
- (unsigned int)maxMultiwayFramerateSupported;
- (long long)screenShareCapabilitiesIPhone;
- (long long)screenShareCapabilitiesIPad;
- (id)init;
- (void)addPixelFormat;
- (unsigned int)maxFrameRateSupportedBackgroundBlur;
- (void)_initializeScreenDimension;
- (unsigned int)screenHeightForDisplayID:(unsigned int)a0;
- (void)dealloc;
- (BOOL)isSpatialAudioSupportedIPad;
- (BOOL)supportsDedicatedSystemAudioStream;
- (long long)screenShareCapabilitiesIPod;

@end
