@class UIColor, SUICAudioLevelSmoother, CADisplayLink, NSMutableArray;
@protocol SUICAudioPowerLevelDataSource;

@interface SUICDictationWaveView : UIView {
    UIColor *_pipColor;
    float _linearPowerLevel;
    float _runningVolumeSum;
    float _framesPerSecond;
    id<SUICAudioPowerLevelDataSource> _audioPowerLevelDataSource;
    CADisplayLink *_displayLink;
    float _numberOfFrames;
    float _initialOffset;
    SUICAudioLevelSmoother *_smoother;
    NSMutableArray *_pipLayers;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedFrame;
}

@property (nonatomic) float powerLevel;

- (void)_tick:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateIn;
- (void).cxx_destruct;
- (double)_leftMargin;
- (void)_resetPips;
- (void)_showPipsWithoutIntroAnimation;
- (void)_removeAllPips;
- (void)_addNewPips;
- (void)_startIntroAnimation;
- (unsigned long long)_numberOfPips;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_startingFrameForPipAtIndex:(unsigned long long)a0;
- (double)_heightForIntroAnimationPips;
- (void)_updatePipHeightAtIndex:(unsigned long long)a0 withHeight:(double)a1;
- (double)_intervalForEachPipAnimation;
- (void)_animateInPipsBetweenLeftIndex:(unsigned long long)a0 rightIndex:(unsigned long long)a1;
- (double)_originXForPipAtIndex:(unsigned long long)a0;
- (double)_pipWidth;
- (double)_maximumPipHeight;
- (double)_minimumPipHeight;
- (float)_heightMultiplierForPipIndex:(unsigned long long)a0;
- (void)_updatePipColor;
- (void)_updatePipHeights;
- (void)_introAnimationTick;
- (float)_smoothStepWithLowerBound:(float)a0 upperBound:(float)a1 innerValue:(float)a2;
- (float)_noiseForPipIndex:(unsigned long long)a0;
- (float)_sinusoidalTaperForPipIndex:(unsigned long long)a0;
- (float)_smoothStepTaperForPipIndex:(unsigned long long)a0;
- (void)setPipColor:(id)a0;
- (void)setAudioPowerLevelDataSource:(id)a0;

@end
