@class AVPlayerItem, AVPlayerLooper, AVQueuePlayer, AVPlayerLayer;

@interface HPSSpatialProfileEarTutorialView : UIView {
    AVQueuePlayer *_playerLeftEar;
    AVQueuePlayer *_playerRightEar;
    AVPlayerLooper *_looperLeftEar;
    AVPlayerLooper *_looperRightEar;
    AVPlayerItem *_playerItemLeftEar;
    AVPlayerItem *_playerItemRightEar;
    AVPlayerLayer *_playerLayerLeftEar;
    AVPlayerLayer *_playerLayerRightEar;
    BOOL _playersPlaying;
    BOOL _playersStartTriggered;
    struct MediaContentStatus { BOOL playerReady; BOOL looperReady; } _statusRightEar;
    struct MediaContentStatus { BOOL playerReady; BOOL looperReady; } _statusLeftEar;
}

- (void)layoutSublayersOfLayer:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)initPlayerLeftEar;
- (void)initPlayerRightEar;
- (void)startPlayerLeftEar;
- (void)startPlayerRightEar;
- (void)stopPlayerLeftEar;
- (void)stopPlayerRightEar;
- (void)stopPlayers;

@end
