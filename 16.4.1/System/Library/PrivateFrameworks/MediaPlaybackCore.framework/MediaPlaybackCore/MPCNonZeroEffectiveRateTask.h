@class AVPlayerItem;

@interface MPCNonZeroEffectiveRateTask : MPCDeferrableTask

@property (weak, nonatomic) AVPlayerItem *playerItem;

- (void).cxx_destruct;
- (void)effectiveRateDidChange:(id)a0;
- (id)initWithPlayerItem:(id)a0 identifier:(id)a1 timeout:(double)a2 queue:(id)a3 block:(id /* block */)a4;
- (void)taskDidExecute;

@end
