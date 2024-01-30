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

+ (long long)deviceClass;
+ (unsigned int)maxRemoteParticipants30fps;
+ (unsigned int)builtinMicCount;

- (id)init;
- (void)dealloc;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)a0;
- (BOOL)isHEVCEncodeSupported:(int)a0;
- (BOOL)isHEVCDecodeSupported:(int)a0;
- (unsigned int)tilesPerVideoFrame:(int)a0 hdrMode:(unsigned long long)a1;
- (unsigned int)tilesPerVideoFrame:(int)a0;
- (id)featureListStringForH264:(int)a0;
- (id)featureListStringForHEVC:(int)a0;
- (BOOL)storeHardwareSettingsForAllOperatingModes;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)a0;

@end
