@class NSDictionary, NSString;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) NSString *fieldMode;

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (int)width;
- (id)cleanApertureDictionary;
- (id)initWithTrustedPixelBufferAttributes:(id)a0;
- (void)dealloc;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (BOOL)willYieldCompressedSamples;
- (int)height;
- (id)pixelAspectRatioDictionary;
- (id)initWithPixelBufferAttributes:(id)a0 exceptionReason:(id *)a1;

@end
