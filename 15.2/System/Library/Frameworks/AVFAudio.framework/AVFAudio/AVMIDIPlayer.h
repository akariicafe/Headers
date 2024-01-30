@interface AVMIDIPlayer : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) float rate;
@property (nonatomic) double currentPosition;

- (struct MIDIPlayerImpl { struct OpaqueAUGraph *x0; struct OpaqueMusicPlayer *x1; struct OpaqueMusicSequence *x2; double x3; id /* block */ x4; id x5; } *)impl;
- (void)finalize;
- (id)initBase;
- (void)play:(id /* block */)a0;
- (void)dealloc;
- (void)prepareToPlay;
- (void)stop;
- (id)initWithContentsOfURL:(id)a0 soundBankURL:(id)a1 error:(id *)a2;
- (id)initWithData:(id)a0 soundBankURL:(id)a1 error:(id *)a2;
- (unsigned long long)hostTimeForBeats:(double)a0;
- (double)beatsForHostTime:(unsigned long long)a0;
- (void)destroyBase;

@end
