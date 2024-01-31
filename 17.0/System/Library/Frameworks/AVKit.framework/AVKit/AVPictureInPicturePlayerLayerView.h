@class _AVSimplePlayerLayerView, AVPlayerLayer;

@interface AVPictureInPicturePlayerLayerView : UIView {
    _AVSimplePlayerLayerView *_simplePlayerLayerView;
}

@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

- (void)attachPlayerLayer;
- (void)detachPlayerLayer;
- (void).cxx_destruct;

@end
