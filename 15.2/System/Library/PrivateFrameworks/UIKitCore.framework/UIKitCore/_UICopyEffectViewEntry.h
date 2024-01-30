@class _UIVisualEffectViewBackdropCaptureGroup;

@interface _UICopyEffectViewEntry : _UIVisualEffectViewEntry

@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;

- (void)addEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (id)description;
- (BOOL)canTransitionToEffect:(id)a0;
- (void).cxx_destruct;

@end
