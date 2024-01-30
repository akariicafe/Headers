@class NSMapTable, AVPlayer;

@interface SVMediaPlaybackController : NSObject

@property (readonly, nonatomic) NSMapTable *timeControlStatusObservers;
@property (weak, nonatomic) AVPlayer *currentlyPlaying;

- (void)unregisterPlayer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerPlayer:(id)a0;
- (void)updateCurrentlyPlaying:(id)a0;

@end
