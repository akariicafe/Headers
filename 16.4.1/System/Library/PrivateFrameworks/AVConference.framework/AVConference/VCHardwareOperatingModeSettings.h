@class NSString;

@interface VCHardwareOperatingModeSettings : NSObject {
    int _avcOperatingMode;
}

@property (readonly, nonatomic) unsigned int usageMode;
@property (readonly, nonatomic) BOOL supportVCPDecoderHEVC;
@property (readonly, nonatomic) BOOL supportVCPEncoderHEVC;
@property (readonly, nonatomic) BOOL vcpInitializedForHEVC;
@property (readonly, nonatomic) NSString *featureListStringHEVC;
@property (readonly, nonatomic) NSString *featureListStringH264;
@property (readonly, nonatomic) unsigned int tilesPerVideoFrame;

+ (unsigned int)encoderUsageTypeWithOperatingMode:(int)a0;

- (id)initWithMode:(int)a0;
- (void)dealloc;
- (void)featureListString;
- (unsigned int)numTilesPerVideoFrameForHDRMode:(unsigned long long)a0;
- (void)vcpCodecGetPropertiesForID:(int)a0 block:(id /* block */)a1;
- (BOOL)vcpSupportsHEVCDecoder;
- (BOOL)vcpSupportsHEVCEncoder;

@end
