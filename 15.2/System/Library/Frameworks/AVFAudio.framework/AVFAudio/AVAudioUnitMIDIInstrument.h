@class NSString;

@interface AVAudioUnitMIDIInstrument : AVAudioUnit <AVAudioMixing>

@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0;
- (void)startNote:(unsigned char)a0 withVelocity:(unsigned char)a1 onChannel:(unsigned char)a2;
- (void)stopNote:(unsigned char)a0 onChannel:(unsigned char)a1;
- (void)sendController:(unsigned char)a0 withValue:(unsigned char)a1 onChannel:(unsigned char)a2;
- (void)sendPitchBend:(unsigned short)a0 onChannel:(unsigned char)a1;
- (void)sendPressure:(unsigned char)a0 onChannel:(unsigned char)a1;
- (void)sendPressureForKey:(unsigned char)a0 withValue:(unsigned char)a1 onChannel:(unsigned char)a2;
- (void)sendProgramChange:(unsigned char)a0 onChannel:(unsigned char)a1;
- (void)sendProgramChange:(unsigned char)a0 bankMSB:(unsigned char)a1 bankLSB:(unsigned char)a2 onChannel:(unsigned char)a3;
- (void)sendMIDIEvent:(unsigned char)a0 data1:(unsigned char)a1 data2:(unsigned char)a2;
- (void)sendMIDIEvent:(unsigned char)a0 data1:(unsigned char)a1;
- (void)sendMIDISysExEvent:(id)a0;

@end
