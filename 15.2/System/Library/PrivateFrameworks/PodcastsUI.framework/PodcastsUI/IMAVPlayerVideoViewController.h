@class IMAVPlayer;

@interface IMAVPlayerVideoViewController : AVPlayerViewController

@property (weak, nonatomic) IMAVPlayer *im_player;

- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;
- (void)mediaItemDidChange;
- (void)playbackSpeedDidChange;

@end
