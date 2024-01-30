@class NSMapTable, AVPlayer;

@interface SVMediaPlaybackController : NSObject

@property (readonly, nonatomic) NSMapTable *timeControlStatusObservers;
@property (weak, nonatomic) AVPlayer *currentlyPlaying;

- (void).cxx_destruct;
- (id)init;
- (void)registerPlayer:(id)a0;
- (void)unregisterPlayer:(id)a0;
- (void)updateCurrentlyPlaying:(id)a0;

@end
