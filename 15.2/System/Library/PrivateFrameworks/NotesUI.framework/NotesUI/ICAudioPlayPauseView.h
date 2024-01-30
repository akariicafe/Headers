@class AVAsset, ICNoteEditorIconImageView, CALayer, ICAttachment;

@interface ICAudioPlayPauseView : UIView

@property (retain, nonatomic) CALayer *backgroundLayer;
@property (retain, nonatomic) ICNoteEditorIconImageView *playView;
@property (retain, nonatomic) ICNoteEditorIconImageView *pauseView;
@property (readonly, nonatomic) AVAsset *audio;
@property (retain, nonatomic) ICAttachment *audioAttachment;
@property (readonly, nonatomic) BOOL isPlaying;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tapGesture:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)togglePlayPause;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)pause;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)play;
- (void)tintColorDidChange;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)updateTime:(double)a0 duration:(double)a1;
- (void)sharedInit;
- (void)audioWillChange;
- (void)audioDidChange;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)showStopped;
- (void)didPlayToEndNotification:(id)a0;
- (id)addSubImageViewForImage:(id)a0;
- (void)showPressed:(BOOL)a0;
- (void)showPlaying;
- (void)showPaused;
- (void)audioPlaybackPlayNotification:(id)a0;
- (void)audioPlaybackPauseNotification:(id)a0;
- (void)audioPlaybackStopNotification:(id)a0;
- (void)audioPlaybackTimeChangedNotification:(id)a0;
- (void)setImageNamed:(id)a0 onLayer:(id)a1 adjustLayerSize:(BOOL)a2;
- (id)foregroundStrokeColor;

@end
