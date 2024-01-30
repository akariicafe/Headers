@class NSArray;

@interface AXMVariablePitchTone : AXMTone {
    NSArray *_keyPitches;
}

- (void).cxx_destruct;
- (unsigned long long)_bufferFrameForKeyPitch:(id)a0;
- (id)initWithKeyPitches:(id)a0 sampleRate:(double)a1 envelope:(id)a2;
- (id)initWithSampleRate:(double)a0 envelope:(id)a1;
- (void)renderInBuffer:(void *)a0 atFrame:(unsigned long long)a1;

@end
