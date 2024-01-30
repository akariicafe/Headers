@class UIColor, NSMutableArray;

@interface MTNowPlayingIndicatorView : UIControl {
    NSMutableArray *_levelViews;
    BOOL bufferingShouldDisplayAsPaused;
}

@property (nonatomic) double interLevelSpacing;
@property (nonatomic) double levelCornerRadius;
@property (nonatomic) double levelWidth;
@property (nonatomic) double maximumLevelHeight;
@property (nonatomic) double minimumLevelHeight;
@property (nonatomic) long long numberOfLevels;
@property (nonatomic) long long playbackState;
@property (nonatomic) long long bounceStyle;
@property (nonatomic) BOOL showsLevelGutters;
@property (retain, nonatomic) UIColor *levelGuttersColor;

- (BOOL)canBecomeFocused;
- (void)tintColorDidChange;
- (double)_seedValueForBarIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_reloadLevelViews;
- (void)_updateLevelAnimations;
- (void)_removeAllAnimations:(BOOL)a0;
- (void)_bufferTimerFired;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_randomSeedValueForBar;
- (double)_fixedSeedValueForBarIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
