@class _UIVisualEffectViewBackdropCaptureGroup, CABackdropLayer;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
}

@property (nonatomic) long long renderMode;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property (readonly, nonatomic) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_applyScaleHintAsRequested:(BOOL)a0;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (void)removeFromCurrentCaptureGroup;

@end
