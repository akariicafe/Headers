@class CADisplayLink, PUValueFilter, UIView;
@protocol PUTransitionViewAnimatorDelegate;

@interface PUTransitionViewAnimator : NSObject {
    struct { unsigned char respondsToDidUpdate : 1; unsigned char respondsToWillEnd : 1; unsigned char respondsToDidEnd : 1; } _delegateFlags;
}

@property (retain, nonatomic, setter=_setView:) UIView *view;
@property (nonatomic, setter=_setSourceFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (nonatomic, setter=_setTargetFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (nonatomic, setter=_setAnchorPoint:) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic, setter=_setShouldUseTargetAspectRatio:) BOOL shouldUseTargetAspectRatio;
@property (nonatomic, setter=_setRampUpDuration:) double rampUpDuration;
@property (nonatomic, setter=_setDirection:) unsigned long long direction;
@property (nonatomic, setter=_setProgress:) double progress;
@property (nonatomic, setter=_setUnfilteredProgress:) double unfilteredProgress;
@property (nonatomic, setter=_setShouldFinish:) BOOL shouldFinish;
@property (nonatomic, setter=_setDesiredTranslation:) struct CGPoint { double x; double y; } _desiredTranslation;
@property (nonatomic, setter=_setDesiredRotation:) double _desiredRotation;
@property (nonatomic, setter=_setDesiredScale:) double _desiredScale;
@property (nonatomic, setter=_setDesiredSizeMixFactor:) double _desiredSizeMixFactor;
@property (nonatomic, setter=_setCurrentTranslation:) struct CGPoint { double x; double y; } currentTranslation;
@property (nonatomic, setter=_setCurrentRotation:) double _currentRotation;
@property (nonatomic, setter=_setCurrentScale:) double _currentScale;
@property (nonatomic, setter=_setCurrentSizeMixFactor:) double _currentSizeMixFactor;
@property (nonatomic, setter=_setTargetAspectRatioSourceFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetAspectRatioSourceFrame;
@property (nonatomic, setter=_setTargetScale:) double _targetScale;
@property (nonatomic, setter=_setAutoUpdating:) BOOL _isAutoUpdating;
@property (retain, nonatomic, setter=_setAutoUpdateDisplayLink:) CADisplayLink *_autoUpdateDisplayLink;
@property (retain, nonatomic, setter=_setRampUpFilter:) PUValueFilter *_rampUpFilter;
@property (retain, nonatomic, setter=_setProgressFilter:) PUValueFilter *_progressFilter;
@property (retain, nonatomic, setter=_setShouldFinishFilter:) PUValueFilter *_shouldFinishFilter;
@property (nonatomic, setter=_setEnding:) BOOL _isEnding;
@property (nonatomic) BOOL autoUpdates;
@property (nonatomic) BOOL appliesScaleViaTransform;
@property (weak, nonatomic) id<PUTransitionViewAnimatorDelegate> delegate;

- (void).cxx_destruct;
- (void)_update;
- (id)initWithView:(id)a0 sourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 anchorPoint:(struct CGPoint { double x0; double x1; })a3 shouldUseTargetAspectRatio:(BOOL)a4 rampUpDuration:(double)a5 direction:(unsigned long long)a6;
- (void)finishWithTranslationVelocity:(struct CGPoint { double x0; double x1; })a0 rotationVelocity:(double)a1 scaleVelocity:(double)a2 shouldBounce:(BOOL)a3;
- (void)updateWithTranslation:(struct CGPoint { double x0; double x1; })a0 rotation:(double)a1 scale:(double)a2;
- (void)cancelWithTranslationVelocity:(struct CGPoint { double x0; double x1; })a0 rotationVelocity:(double)a1 scaleVelocity:(double)a2 shouldBounce:(BOOL)a3;
- (void)cancelWithoutAnimation;
- (void)_updateAutoUpdateDisplayLink;
- (void)_autoUpdate:(id)a0;
- (void)_endWithTranslationVelocity:(struct CGPoint { double x0; double x1; })a0 rotationVelocity:(double)a1 scaleVelocity:(double)a2 shouldBounce:(BOOL)a3 finish:(BOOL)a4 animated:(BOOL)a5;

@end
