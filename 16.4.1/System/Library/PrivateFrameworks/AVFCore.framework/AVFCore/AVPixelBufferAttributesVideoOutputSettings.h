@class NSDictionary, NSString;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) NSString *fieldMode;

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;

- (int)width;
- (id)initWithTrustedPixelBufferAttributes:(id)a0;
- (id)cleanApertureDictionary;
- (int)height;
- (id)pixelAspectRatioDictionary;
- (void)dealloc;
- (BOOL)willYieldCompressedSamples;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (id)initWithPixelBufferAttributes:(id)a0 exceptionReason:(id *)a1;

@end
