@interface HMIVideoProcessingNode : HMIVideoNode

- (void)finish;
- (void)flushAsync;
- (void)flush;
- (void)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
