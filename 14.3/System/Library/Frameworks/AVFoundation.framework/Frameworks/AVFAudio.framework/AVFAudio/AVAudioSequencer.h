@class NSArray, AVMusicTrack, NSDictionary;

@interface AVAudioSequencer : NSObject {
    void *_impl;
}

@property (nonatomic) double currentPositionInSeconds;
@property (nonatomic) double currentPositionInBeats;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) float rate;
@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) AVMusicTrack *tempoTrack;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (id)init;
- (BOOL)startAndReturnError:(id *)a0;
- (void)dealloc;
- (void)stop;
- (id)initWithImpl:(struct AVAudioSequencerImpl { struct OpaqueMusicPlayer *x0; struct OpaqueMusicSequence *x1; id x2; id x3; id x4; id x5; } *)a0;
- (void)prepareToPlay;
- (id)initWithAudioEngine:(id)a0;
- (unsigned long long)numberOfTracks;
- (void)cleanTracks;
- (void)setupTrackArray;
- (void)setupTracks;
- (BOOL)loadFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)loadFromData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToURL:(id)a0 SMPTEResolution:(long long)a1 replaceExisting:(BOOL)a2 error:(id *)a3;
- (id)getTempoTrack;
- (id)dataWithSMPTEResolution:(long long)a0 error:(id *)a1;
- (double)secondsForBeats:(double)a0;
- (double)beatsForSeconds:(double)a0;
- (void)setTrackArray:(id)a0;
- (id)trackArray;
- (void)setTempoTrack:(id)a0;
- (unsigned long long)hostTimeForBeats:(double)a0 error:(id *)a1;
- (double)beatsForHostTime:(unsigned long long)a0 error:(id *)a1;

@end
