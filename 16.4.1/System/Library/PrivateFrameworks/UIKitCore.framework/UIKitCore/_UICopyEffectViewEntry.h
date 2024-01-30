@class _UIVisualEffectViewBackdropCaptureGroup;

@interface _UICopyEffectViewEntry : _UIVisualEffectViewEntry

@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;

- (BOOL)canTransitionToEffect:(id)a0;
- (void)addEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
