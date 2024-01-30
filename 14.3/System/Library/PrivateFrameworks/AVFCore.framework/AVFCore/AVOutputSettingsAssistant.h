@class NSDictionary, NSString, AVOutputSettingsAssistantInternal;

@interface AVOutputSettingsAssistant : NSObject {
    AVOutputSettingsAssistantInternal *_internal;
}

@property (readonly, nonatomic) NSDictionary *audioSettings;
@property (readonly, nonatomic) NSDictionary *videoSettings;
@property (readonly, nonatomic) NSString *outputFileType;

+ (id)_allOutputSettingsPresets;
+ (id)baseSettingsProviderForPreset:(id)a0;
+ (id)videoSettingsAdjusterForPreset:(id)a0;
+ (id)videoEncoderCapabilities;
+ (BOOL)validatesSourceVideoMinFrameDuration;
+ (id)availableOutputSettingsPresets;
+ (id)outputSettingsAssistantWithPreset:(id)a0;

- (id)init;
- (void)dealloc;
- (id)videoEncoderSpecification;
- (id)initWithPreset:(id)a0;
- (const struct opaqueCMFormatDescription { } *)sourceVideoFormat;
- (const struct opaqueCMFormatDescription { } *)sourceAudioFormat;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })sourceVideoAverageFrameDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })sourceVideoMinFrameDuration;
- (void)setSourceAudioFormat:(struct opaqueCMFormatDescription { } *)a0;
- (void)setSourceVideoFormat:(struct opaqueCMFormatDescription { } *)a0;
- (void)setSourceVideoAverageFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setSourceVideoMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setVideoEncoderSpecification:(id)a0;

@end
