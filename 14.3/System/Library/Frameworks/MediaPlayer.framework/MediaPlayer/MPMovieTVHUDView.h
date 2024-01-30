@class UIImageView, MPAVController;

@interface MPMovieTVHUDView : UIView {
    long long _currentState;
    UIImageView *_playbackMode;
}

@property (retain, nonatomic) MPAVController *player;

- (void).cxx_destruct;
- (void)_playbackStateDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)_fadeOut;
- (void)_changeState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animationDidStop:(id)a0;

@end
