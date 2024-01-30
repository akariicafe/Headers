@class UIButton, MTMaterialView, NCMaterialButton;

@interface NCMediaPlayPauseButton : UIControl

@property (retain, nonatomic) NCMaterialButton *button;
@property (retain, nonatomic) UIButton *invisibleButton;
@property (retain, nonatomic) MTMaterialView *backgroundCircle;
@property (nonatomic) long long type;

- (void)_updateStyle;
- (void)_updateBackground;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)_updateSize;
- (void)layoutSubviews;
- (void)_updateType;
- (void)_buttonTouchUpInside:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1;
- (void)_updateSelected;
- (void)_updateBackgroundForAudioStyle;
- (void)_updateBackgroundForMovieStyle;
- (void)_updateSizeForAudioStyle;
- (void)_updateSizeForMovieStyle;
- (void)_updateStyleForAudioStyle;
- (void)_updateStyleForMovieStyle;
- (void)_updateSelectedForAudioStyle;
- (void)_updateSelectedForMovieStyle;

@end
