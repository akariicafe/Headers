@class NSArray, UIViewFloatAnimatableProperty;
@protocol PKPaletteTransitionDelegate;

@interface PKPaletteTransition : NSObject

@property (nonatomic, setter=_setTargetVisualState:) long long targetVisualState;
@property (nonatomic, setter=_setIntermediateVisualState:) long long intermediateVisualState;
@property (nonatomic, setter=_setPointingDirection:) long long pointingDirection;
@property (retain, nonatomic) NSArray *_remainingTransitionStages;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *rotationAngleAnimatableProperty;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *expandedToCollapsedAnimatableProperty;
@property (weak, nonatomic) id<PKPaletteTransitionDelegate> delegate;
@property (readonly, nonatomic, getter=isTransitionInProgress) BOOL transitionInProgress;
@property (readonly, nonatomic) long long initialVisualState;
@property (readonly, nonatomic) double expandedToCollapsedRatio;

- (void).cxx_destruct;
- (long long)_currentStage;
- (BOOL)_canMoveToNextTransitionStage;
- (void)_handleExpandedToCollapsedAnimatablePropertyPresentationValueChanged;
- (void)_handleRotationAnimatablePropertyPresentationValueChanged;
- (void)_moveToNextTransitionStageIfReady;
- (id)initWithInitialVisualState:(long long)a0;
- (void)paletteDidBeginResizingAnimation;
- (void)paletteDidBeginRotationAnimation;
- (void)transitionToVisualState:(long long)a0;

@end
