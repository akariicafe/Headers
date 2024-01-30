@class NSDictionary;

@interface BWAudioConverterNode : BWNode {
    NSDictionary *_settings;
    struct OpaqueFigSampleBufferProcessor { } *_audioCompressionSBP;
}

@property (readonly, nonatomic) NSDictionary *gaplessPlaybackInfo;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (int)_setupAudioCompressionSBPForInputFormat:(id)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)init;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)settings;
- (void)_teardownAudioCompressionSBP;
- (void)relinquishHardware;
- (void)setSettings:(id)a0;
- (void)acquireHardware;
- (void)_handleUpdatedRecordingSettings:(id)a0;

@end
