@protocol HalogenAudioDelegate;

@interface HalogenAudio : NSObject

@property struct OpaqueAudioComponentInstance { } *audioComponentInst;
@property (retain, nonatomic) id<HalogenAudioDelegate> halogenUnitDelegate;

- (void)dealloc;
- (id)initAudioWithParameters:(id)a0 nInputChannels:(int)a1 nOutputChannels:(int)a2 sampleRate:(int)a3 bitDepth:(int)a4 inputFrameSizeInBytes:(int)a5 outputFrameSizeInBytes:(int)a6;
- (struct OpaqueAudioComponentInstance { } *)getAudioComponentInstance;
- (int)startAudioUnit;
- (int)stopAudioUnit;

@end
