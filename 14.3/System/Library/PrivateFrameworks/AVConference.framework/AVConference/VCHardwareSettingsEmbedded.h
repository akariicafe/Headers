@class NSString;

@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol> {
    NSString *_deviceName;
    long long _chipId;
    int _deviceClass;
    int _screenWidth;
    int _screenHeight;
    long long _videoEncoderType;
    BOOL _hasBasebandInitialized;
    BOOL _hasBaseband;
    BOOL _hasAppleNeuralEngine;
}

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasBaseband;
@property (readonly, nonatomic) int screenWidth;
@property (readonly, nonatomic) int screenHeight;
@property (readonly, nonatomic) long long deviceClass;
@property (readonly, nonatomic) long long chipId;
@property (readonly, nonatomic) long long videoEncoderType;
@property (readonly, nonatomic) BOOL useSoftFramerateSwitching;
@property (readonly, nonatomic) BOOL hasAppleNeuralEngine;
@property (readonly, nonatomic) unsigned int audioPacketLossConcealmentAlgorithmAACELD;
@property (readonly, nonatomic) BOOL isSecondDisplaySupportEnabled;
@property (readonly, nonatomic) BOOL canDo1080p;
@property (readonly, nonatomic) BOOL isHEVC444DecodeSupported;
@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property (readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property (readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property (readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property (readonly, nonatomic) unsigned int maxMultiwayFramerateSupported;
@property (readonly, nonatomic) BOOL supportsMultiway720pStream;
@property (readonly, nonatomic) BOOL isDeviceLargeScreen;
@property (readonly, nonatomic) BOOL supportsHEIFEncoding;
@property (readonly, nonatomic) BOOL isPixelFormatAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (long long)deviceClass;

- (id)init;
- (void)dealloc;
- (void)addPixelFormat;
- (unsigned int)maxRemoteParticipants30fps;
- (void)_initializeScreenDimension;

@end
