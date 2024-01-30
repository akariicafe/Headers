@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
    NSDictionary *_adaptedVideoCompressionProperties;
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property (readonly, nonatomic) unsigned int videoCodecType;
@property (readonly, nonatomic) NSDictionary *videoEncoderSpecification;
@property (readonly, nonatomic) NSDictionary *videoCompressionProperties;

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
+ (BOOL)_validateVideoCompressionProperties:(id)a0 againstSupportedPropertyDictionary:(id)a1 forCodecType:(id)a2 exceptionReason:(id *)a3;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (int)width;
- (id)cleanApertureDictionary;
- (void)dealloc;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (BOOL)willYieldCompressedSamples;
- (int)height;
- (id)pixelAspectRatioDictionary;
- (id)initWithTrustedAVVideoSettingsDictionary:(id)a0;
- (id)initWithAVVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;

@end
