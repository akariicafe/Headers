@class _UIVisualEffectViewBackdropCaptureGroup, CABackdropLayer;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
}

@property (nonatomic) long long renderMode;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property (readonly, nonatomic) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

- (BOOL)isTransparentFocusItem;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)applyRequestedFilterEffects;
- (void)applyIdentityFilterEffects;
- (void)removeFromCurrentCaptureGroup;
- (void)_applyScaleHintAsRequested:(BOOL)a0;
- (void)willMoveToWindow:(id)a0;
- (void).cxx_destruct;

@end
