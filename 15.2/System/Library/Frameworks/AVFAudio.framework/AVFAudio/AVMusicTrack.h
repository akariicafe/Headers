@class AVAudioUnit;

@interface AVMusicTrack : NSObject {
    void *_impl;
}

@property (retain, nonatomic) AVAudioUnit *destinationAudioUnit;
@property (nonatomic) unsigned int destinationMIDIEndpoint;
@property (nonatomic) struct _AVBeatRange { double x0; double x1; } loopRange;
@property (nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled;
@property (nonatomic) long long numberOfLoops;
@property (nonatomic) double offsetTime;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isSoloed) BOOL soloed;
@property (nonatomic) double lengthInBeats;
@property (nonatomic) double lengthInSeconds;
@property (readonly, nonatomic) unsigned long long timeResolution;

- (unsigned long long)index;
- (struct OpaqueMusicTrack { } *)track;
- (id)initWithImpl:(struct MusicTrackImpl { struct OpaqueMusicTrack *x0; id x1; BOOL x2; unsigned int x3; } *)a0;
- (void)dealloc;
- (BOOL)usesAutomatedParameters;
- (void)setUsesAutomatedParameters:(BOOL)a0;

@end
