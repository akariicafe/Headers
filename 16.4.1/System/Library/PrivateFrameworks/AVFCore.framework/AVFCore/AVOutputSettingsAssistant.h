@class NSDictionary, NSString, AVOutputSettingsAssistantInternal;

@interface AVOutputSettingsAssistant : NSObject {
    AVOutputSettingsAssistantInternal *_internal;
}

@property (readonly, nonatomic) NSDictionary *audioSettings;
@property (readonly, nonatomic) NSDictionary *videoSettings;
@property (readonly, nonatomic) NSString *outputFileType;

+ (id)videoSettingsAdjusterForPreset:(id)a0;
+ (id)_allOutputSettingsPresets;
+ (id)availableOutputSettingsPresets;
+ (id)baseSettingsProviderForPreset:(id)a0;
+ (id)outputSettingsAssistantWithPreset:(id)a0;
+ (BOOL)validatesSourceVideoMinFrameDuration;
+ (id)videoEncoderCapabilities;

- (id)initWithPreset:(id)a0;
- (void)dealloc;
- (id)init;
- (void)setSourceVideoMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })sourceVideoAverageFrameDuration;
- (void)setSourceAudioFormat:(struct opaqueCMFormatDescription { } *)a0;
- (void)setSourceVideoAverageFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setSourceVideoFormat:(struct opaqueCMFormatDescription { } *)a0;
- (void)setVideoEncoderSpecification:(id)a0;
- (const struct opaqueCMFormatDescription { } *)sourceAudioFormat;
- (const struct opaqueCMFormatDescription { } *)sourceVideoFormat;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })sourceVideoMinFrameDuration;
- (id)videoEncoderSpecification;

@end
