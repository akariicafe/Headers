@interface ANAnchorTrackPlayer : ANTrackPlayer

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;

- (void)playInternalWithCompletionHandler:(id /* block */)a0;
- (void)handleInterruptionDelay:(double)a0;

@end
