@class IMAVPlayer;

@interface IMAVPlayerVideoViewController : AVPlayerViewController

@property (weak, nonatomic) IMAVPlayer *im_player;

- (void)mediaItemDidChange;
- (id)initWithPlayer:(id)a0;
- (void)playbackSpeedDidChange;
- (void).cxx_destruct;

@end
