@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings

@property (readonly, nonatomic) NSDictionary *audioSettingsDictionary;

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
+ (id)defaultAudioOutputSettings;
+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)a0;
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)a0;
+ (id)registeredOutputSettingsClasses;
+ (id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)a0;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1 exceptionReason:(id *)a2;

- (id)compatibleMediaTypes;
- (id)initWithAudioSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
- (BOOL)validateUsingOutputSettingsValidator:(id)a0 reason:(id *)a1;

@end
