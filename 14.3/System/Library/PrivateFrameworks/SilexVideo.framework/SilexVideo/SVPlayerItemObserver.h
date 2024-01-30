@class SVKeyValueObserver, AVPlayerItem, NSString, AVPlayer;

@interface SVPlayerItemObserver : NSObject <SVPlayerItemObserving>

@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) SVKeyValueObserver *observer;
@property (weak, nonatomic) AVPlayerItem *item;
@property (copy, nonatomic, setter=onChange:) id /* block */ changeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;

@end
