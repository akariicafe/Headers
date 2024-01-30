@class _UIVisualEffectViewBackdropCaptureGroup;

@interface _UICopyEffect : UIVisualEffect {
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
}

+ (id)copyEffectWithCaptureGroup:(id)a0;

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (long long)_expectedUsage;
- (id)description;
- (void).cxx_destruct;

@end
