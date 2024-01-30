@class AVPlayer;

@interface PlayerKVOHelper : NSObject

@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) id /* block */ block;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0 block:(id /* block */)a1;

@end
