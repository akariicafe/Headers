@interface HMIVideoProcessingNode : HMIVideoNode

- (void)finish;
- (void)flush;
- (void)flushAsync;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
