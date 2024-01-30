@class NSDictionary;
@protocol AVOutputSettingsAssistantBaseSettingsProvider, AVOutputSettingsAssistantVideoSettingsAdjuster;

@interface AVOutputSettingsAssistantInternal : NSObject {
    id<AVOutputSettingsAssistantBaseSettingsProvider> baseSettingsProvider;
    id<AVOutputSettingsAssistantVideoSettingsAdjuster> videoSettingsAdjuster;
    struct opaqueCMFormatDescription { } *sourceVideoFormat;
    struct opaqueCMFormatDescription { } *sourceAudioFormat;
    NSDictionary *videoEncoderSpecification;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceVideoAverageFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceVideoMinFrameDuration;
}

@end
