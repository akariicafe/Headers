@interface ANAnchorTrackPlayer : ANTrackPlayer

@property (nonatomic) double anchorPoint;

- (BOOL)playInternalSync;
- (id)whatIsPlaying;
- (void)stopInternalSync;
- (void)nextInternalSync;
- (void)previousInternalSync;
- (void)handleInterruptionDelay:(double)a0;
- (int)numberActivePlayers;
- (id)initWithAnchorPoint:(double)a0 options:(unsigned long long)a1 audioSession:(id)a2;
- (double)_trackTrimTime:(long long)a0;
- (double)_currentEndTime;
- (double)_anchorDeltaForNextSync:(double)a0;
- (double)_anchorDeltaForPreviousSync:(double)a0;
- (id)initWithAnchorPoint:(double)a0 andOptions:(unsigned long long)a1;
- (BOOL)addingNewPlayer:(id)a0;

@end
