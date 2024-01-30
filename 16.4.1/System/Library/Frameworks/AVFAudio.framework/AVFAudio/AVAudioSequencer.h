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

- (BOOL)removeTrack:(id)a0;
- (BOOL)startAndReturnError:(id *)a0;
- (void)dealloc;
- (void)stop;
- (id)init;
- (id)initWithImpl:(void *)a0;
- (void)prepareToPlay;
- (void)setupTrackArray;
- (double)beatsForHostTime:(unsigned long long)a0 error:(id *)a1;
- (double)beatsForSeconds:(double)a0;
- (void)cleanTracks;
- (id)createAndAppendTrack;
- (id)dataWithSMPTEResolution:(long long)a0 error:(id *)a1;
- (id)getTempoTrack;
- (unsigned long long)hostTimeForBeats:(double)a0 error:(id *)a1;
- (id)initWithAudioEngine:(id)a0;
- (BOOL)loadFromData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)loadFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)numberOfTracks;
- (void)reverseEvents;
- (double)secondsForBeats:(double)a0;
- (void)setTempoTrack:(id)a0;
- (void)setTrackArray:(id)a0;
- (void)setUserCallback:(id /* block */)a0;
- (void)setupTracks;
- (id)trackArray;
- (BOOL)writeToURL:(id)a0 SMPTEResolution:(long long)a1 replaceExisting:(BOOL)a2 error:(id *)a3;

@end
