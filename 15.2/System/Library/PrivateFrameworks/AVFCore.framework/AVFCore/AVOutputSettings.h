@class NSSet, NSDictionary;

@interface AVOutputSettings : NSObject <NSCopying>

@property (class, readonly) BOOL supportsEmptyOutputSettingsDictionary;

@property (readonly, nonatomic) NSSet *compatibleMediaTypes;
@property (readonly, nonatomic) BOOL willYieldCompressedSamples;
@property (readonly, nonatomic) NSDictionary *outputSettingsDictionary;

+ (unsigned long long)_validateOutputSettingsDictionary:(id)a0 compatibilityDescription:(id *)a1;
+ (unsigned long long)validateOutputSettingsDictionary:(id)a0;
+ (id)outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1;
+ (id)defaultOutputSettingsForMediaType:(id)a0;
+ (id)registeredOutputSettingsClasses;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1 exceptionReason:(id *)a2;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (id)initWithOutputSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
- (BOOL)validateUsingOutputSettingsValidator:(id)a0 reason:(id *)a1;
- (id)description;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;

@end
