@class NSDictionary, NSString;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) NSString *fieldMode;

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (id)initWithPixelBufferAttributes:(id)a0 exceptionReason:(id *)a1;
- (int)height;
- (BOOL)willYieldCompressedSamples;
- (id)pixelAspectRatioDictionary;
- (int)width;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (id)initWithTrustedPixelBufferAttributes:(id)a0;
- (id)cleanApertureDictionary;
- (void)dealloc;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;

@end
