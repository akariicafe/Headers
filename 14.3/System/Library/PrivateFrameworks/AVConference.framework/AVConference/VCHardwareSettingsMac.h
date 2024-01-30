@class NSString;

@interface VCHardwareSettingsMac : VCHardwareSettings <VCHardwareSettingsMacProtocol> {
    BOOL _hiDefEncoding;
    BOOL _isGVAEncoderAvailableInitialized;
    BOOL _isGVAEncoderAvailable;
    int _machineType;
    int _cpuFamily;
    int _numProcessors;
    int _mhrtz;
    int _isG5;
    int _hardwareScore;
    NSString *_cpuType;
    NSString *_machineName;
}

@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property (readonly, nonatomic) NSString *machineName;
@property (readonly, nonatomic) int hardwareScore;
@property (readonly, nonatomic) BOOL canDoHiDefEncoding;
@property (readonly, nonatomic) BOOL canDoHiDefDecoding;
@property (readonly, nonatomic) BOOL supports1080pEncoding;
@property (readonly, nonatomic) BOOL supports1080pDecoding;
@property (readonly, nonatomic) BOOL canDoHEVC;
@property (readonly, nonatomic) BOOL isMacBookWVGA;
@property (readonly, nonatomic) BOOL isMacPro;
@property (readonly, nonatomic) BOOL isIMac;
@property (readonly, nonatomic) BOOL useSoftFramerateSwitching;
@property (readonly, nonatomic) unsigned int hwEncoderExitBitrate;
@property (readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
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
- (int)_getCPUFamilyType;
- (id)_getCPUTypeStringForMachineType:(int)a0;
- (void)addPixelFormat;
- (BOOL)isGVAEncoderAvailable;
- (BOOL)_isModel:(id)a0;
- (BOOL)_isMachineNewerThanSandybridge:(int)a0;
- (BOOL)isIMacPro;
- (unsigned int)maxRemoteParticipants30fps;

@end
