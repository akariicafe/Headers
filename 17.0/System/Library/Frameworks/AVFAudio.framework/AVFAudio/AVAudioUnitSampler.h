@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument

@property (nonatomic) float stereoPan;
@property (nonatomic) float overallGain;
@property (nonatomic) float masterGain;
@property (nonatomic) float globalTuning;

- (id)init;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0;
- (BOOL)loadAudioFilesAtURLs:(id)a0 error:(id *)a1;
- (BOOL)loadInstrumentAtURL:(id)a0 error:(id *)a1;
- (BOOL)loadSoundBankInstrumentAtURL:(id)a0 program:(unsigned char)a1 bankMSB:(unsigned char)a2 bankLSB:(unsigned char)a3 error:(id *)a4;

@end
