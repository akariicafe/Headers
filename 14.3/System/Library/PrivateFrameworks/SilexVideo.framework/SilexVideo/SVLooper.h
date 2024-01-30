@class SVVideoDurationObserver, AVPlayer;

@interface SVLooper : NSObject

@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) SVVideoDurationObserver *durationObserver;

- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;

@end
