@class ISWrappedAVPlayer, ISAVPlayerUIView;

@interface ISVideoPlayerUIView : UIView {
    ISAVPlayerUIView *_playerView;
}

@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (copy, nonatomic) id /* block */ videoLayerReadyForDisplayChangeHandler;
@property (readonly, nonatomic) BOOL videoLayerReadyForDisplay;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentMode:(long long)a0;
- (void)_updateVideoGravity;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_ISVideoPlayerUIView_commonInitialization;
- (id)playerLayer;

@end
