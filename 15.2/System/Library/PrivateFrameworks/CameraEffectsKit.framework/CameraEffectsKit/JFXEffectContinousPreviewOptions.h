@class NSArray;

@interface JFXEffectContinousPreviewOptions : JFXEffectPreviewOptions

@property (nonatomic) unsigned long long backgroundType;
@property (retain, nonatomic) NSArray *effectsToApplyToBackground;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } effectAnimationDuration;
@property (nonatomic) BOOL loopAnimation;
@property (nonatomic) unsigned int maxFramesRenderedAtATime;
@property (copy, nonatomic) id /* block */ renderPropertiesConfigurationBlock;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initContinousPreviewOptions;

@end
