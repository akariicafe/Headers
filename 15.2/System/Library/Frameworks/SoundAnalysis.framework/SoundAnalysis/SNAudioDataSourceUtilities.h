@class SNAudioQueueConfiguration;

@interface SNAudioDataSourceUtilities : NSObject

@property (class, readonly) SNAudioQueueConfiguration *audioQueueConfiguration;

+ (void)enableAlwaysOnAudioRouting:(struct OpaqueAudioQueue { } *)a0;
+ (void)setChannelAssignment:(unsigned int)a0 onQueue:(struct OpaqueAudioQueue { } *)a1;
+ (id)createSiriAudioQueueConfigurationUsingChannelNumber:(unsigned int)a0;
+ (id)createDefaultAudioQueueConfigurationUsingChannelNumber:(unsigned int)a0;
+ (id)builtInMicrophoneDeviceUID;

@end
