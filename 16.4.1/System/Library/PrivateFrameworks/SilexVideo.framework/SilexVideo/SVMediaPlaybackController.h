@class NSMapTable, AVPlayer;

@interface SVMediaPlaybackController : NSObject

@property (readonly, nonatomic) NSMapTable *timeControlStatusObservers;
@property (weak, nonatomic) AVPlayer *currentlyPlaying;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterPlayer:(id)a0;
- (void)registerPlayer:(id)a0;
- (void)updateCurrentlyPlaying:(id)a0;

@end
