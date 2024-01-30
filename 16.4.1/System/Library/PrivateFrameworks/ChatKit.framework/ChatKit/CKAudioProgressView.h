@class IMManualUpdater;

@interface CKAudioProgressView : CKBalloonImageView

@property (retain, nonatomic) IMManualUpdater *displayUpdater;
@property (nonatomic) float progress;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic, getter=isPlayed) BOOL played;
@property (nonatomic) char color;

+ (id)imageWithType:(unsigned char)a0 color:(char)a1;
+ (float)progressForTime:(double)a0 duration:(double)a1;
+ (id)templateImageWithControlImage:(id)a0;
+ (id)templateImageWithType:(unsigned char)a0;

- (void)prepareForDisplay;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForDisplayIfNeeded;
- (void)setNeedsPrepareForDisplay;

@end
