@class _AVSimplePlayerLayerView, AVPlayerLayer;

@interface AVPictureInPicturePlayerLayerView : UIView {
    _AVSimplePlayerLayerView *_simplePlayerLayerView;
}

@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

- (void).cxx_destruct;
- (void)attachPlayerLayer;
- (void)detachPlayerLayer;

@end
