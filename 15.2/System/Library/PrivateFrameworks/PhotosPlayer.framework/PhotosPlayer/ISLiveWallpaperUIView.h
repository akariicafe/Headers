@class NSTimer, ISLiveWallpaperPlayer, UIGestureRecognizer;

@interface ISLiveWallpaperUIView : ISBasePlayerUIView

@property (nonatomic) BOOL touching;
@property (nonatomic) double force;
@property (retain, nonatomic) NSTimer *updateTimer;
@property (retain, nonatomic) ISLiveWallpaperPlayer *player;
@property (readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handlePlaybackRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)_updatePlayer;
- (void)_ISLiveWallpaperUIViewCommonInitialization;
- (void)_handleUpdateTimer;

@end
