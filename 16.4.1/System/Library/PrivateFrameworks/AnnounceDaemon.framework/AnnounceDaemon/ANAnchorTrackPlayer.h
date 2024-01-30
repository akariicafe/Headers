@interface ANAnchorTrackPlayer : ANTrackPlayer

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;

- (void)handleInterruptionDelay:(double)a0;
- (void)playInternalWithCompletionHandler:(id /* block */)a0;

@end
