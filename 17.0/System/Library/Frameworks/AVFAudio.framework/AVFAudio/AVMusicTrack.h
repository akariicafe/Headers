@class AVAudioUnit;

@interface AVMusicTrack : NSObject {
    void *_impl;
}

@property BOOL usesAutomatedParameters;
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

- (id)initWithImpl:(struct MusicTrackImpl { struct OpaqueMusicTrack *x0; id x1; BOOL x2; unsigned int x3; } *)a0;
- (void)dealloc;
- (unsigned long long)index;
- (void)enumerateEventsInRange:(struct _AVBeatRange { double x0; double x1; })a0 usingBlock:(id /* block */)a1;
- (struct OpaqueMusicTrack { } *)track;
- (void)doAddExtendedTempoEvent:(id)a0 atBeat:(double)a1;
- (void)addEvent:(id)a0 atBeat:(double)a1;
- (void)clearEventsInRange:(struct _AVBeatRange { double x0; double x1; })a0;
- (void)copyAndMergeEventsInRange:(struct _AVBeatRange { double x0; double x1; })a0 fromTrack:(id)a1 mergeAtBeat:(double)a2;
- (void)copyEventsInRange:(struct _AVBeatRange { double x0; double x1; })a0 fromTrack:(id)a1 insertAtBeat:(double)a2;
- (id)createEventIterator;
- (void)cutEventsInRange:(struct _AVBeatRange { double x0; double x1; })a0;
- (void)doAddAUPresetEvent:(id)a0 atBeat:(double)a1;
- (void)doAddExtendedNoteOnEvent:(id)a0 atBeat:(double)a1;
- (void)doAddMIDIChannelEvent:(id)a0 atBeat:(double)a1;
- (void)doAddMIDIMetaEvent:(id)a0 atBeat:(double)a1;
- (void)doAddMIDINoteEvent:(id)a0 atBeat:(double)a1;
- (void)doAddMIDISysexEvent:(id)a0 atBeat:(double)a1;
- (void)doAddParameterEvent:(id)a0 atBeat:(double)a1;
- (void)doAddUserEvent:(id)a0 atBeat:(double)a1;
- (void)moveEventsInRange:(struct _AVBeatRange { double x0; double x1; })a0 byAmount:(double)a1;
- (void)setUsesAutomatedParameters:(BOOL)a0;
- (BOOL)usesAutomatedParameters;

@end
