@protocol HalogenAudioDelegate;

@interface HalogenAudio : NSObject

@property struct OpaqueAudioComponentInstance { } *audioComponentInst;
@property int nInputChannels;
@property int nOutputChannels;
@property int sampleRate;
@property int bitDepth;
@property int inputFrameSizeInBytes;
@property int outputFrameSizeInBytes;
@property (retain, nonatomic) id<HalogenAudioDelegate> halogenUnitDelegate;

- (void)dealloc;
- (void)_deinitAudioInstance;
- (struct OpaqueAudioComponentInstance { } *)getAudioComponentInstance;
- (id)initAudioWithParameters:(id)a0 nInputChannels:(int)a1 nOutputChannels:(int)a2 sampleRate:(int)a3 bitDepth:(int)a4 inputFrameSizeInBytes:(int)a5 outputFrameSizeInBytes:(int)a6;
- (void)releaseAudioUnitInstance;
- (BOOL)startAudioUnit;
- (BOOL)stopAudioUnit;

@end
