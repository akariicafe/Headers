@class NSDictionary, NSString;

@interface AVVideoOutputSettings : AVOutputSettings

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) NSDictionary *cleanApertureDictionary;
@property (readonly, nonatomic) NSDictionary *pixelAspectRatioDictionary;
@property (readonly, nonatomic) NSDictionary *pixelTransferProperties;
@property (readonly, nonatomic) NSDictionary *videoScalingProperties;
@property (readonly, nonatomic) BOOL dimensionsAreBoundingBox;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minimumFrameDuration;
@property (readonly, nonatomic) NSString *frameRateConversionAlgorithm;
@property (readonly, nonatomic) BOOL allowWideColor;
@property (readonly, nonatomic) NSDictionary *videoSettingsDictionary;

+ (id)registeredOutputSettingsClasses;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1 exceptionReason:(id *)a2;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
+ (id)_validValuesForScalingMode;
+ (id)defaultVideoOutputSettings;
+ (id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)a0;
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)a0;

- (void)colorPropertiesConsideringFormatDescriptions:(id)a0 colorPrimaries:(id *)a1 transferFunction:(id *)a2 ycbcrMatrix:(id *)a3;
- (id)compatibleMediaTypes;
- (id)initWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
- (BOOL)validateUsingOutputSettingsValidator:(id)a0 reason:(id *)a1;

@end
