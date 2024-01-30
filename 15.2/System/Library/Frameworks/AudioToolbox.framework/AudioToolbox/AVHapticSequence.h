@class AVHapticPlayer;

@interface AVHapticSequence : NSObject {
    unsigned long long _eventBehavior;
    BOOL _loopIsEnabled;
    float _loopLength;
    float _playbackRate;
}

@property (weak) AVHapticPlayer *player;
@property unsigned long long seqID;
@property double duration;
@property double lastStartTime;
@property unsigned long long activeChannel;
@property unsigned long long eventBehavior;
@property BOOL loopingEnabled;
@property float playbackRate;
@property (readonly) unsigned long long channelCount;
@property (copy) id /* block */ completionHandler;

- (id)initWithData:(id)a0 player:(id)a1 error:(id *)a2;
- (BOOL)playAtTime:(double)a0 offset:(double)a1 error:(id *)a2;
- (BOOL)setVolume:(float)a0 atTime:(double)a1 error:(id *)a2;
- (BOOL)prepareToPlayAndReturnError:(id *)a0;
- (BOOL)activateChannelByIndex:(unsigned long long)a0 atTime:(double)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)resetAtTime:(double)a0 error:(id *)a1;
- (id)initWithEvents:(id)a0 player:(id)a1 error:(id *)a2;
- (id)initWithDictionary:(id)a0 player:(id)a1 error:(id *)a2;
- (BOOL)setLoopingEnabled:(BOOL)a0 error:(id *)a1;
- (unsigned long long)getChannelCount;
- (BOOL)setLoopLength:(float)a0 error:(id *)a1;
- (BOOL)pauseAtTime:(double)a0 error:(id *)a1;
- (BOOL)resumeAtTime:(double)a0 error:(id *)a1;
- (BOOL)seekToTime:(double)a0 error:(id *)a1;
- (BOOL)setParameter:(unsigned long long)a0 value:(float)a1 channel:(unsigned long long)a2 atTime:(double)a3 error:(id *)a4;
- (BOOL)cancelAndReturnError:(id *)a0;
- (id)init;
- (void)dealloc;
- (BOOL)stopAtTime:(double)a0 error:(id *)a1;

@end
