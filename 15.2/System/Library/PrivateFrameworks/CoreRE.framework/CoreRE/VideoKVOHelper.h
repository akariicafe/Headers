@class AVPlayer;

@interface VideoKVOHelper : NSObject

@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) id /* block */ playerItemBlock;
@property (copy, nonatomic) id /* block */ playerBlock;
@property (retain, nonatomic) id timeObserver;

- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)addAVPlayerItemObserverWithBlock:(id /* block */)a0;
- (void)addAVPlayerRateObserverWithBlock:(id /* block */)a0;

@end
