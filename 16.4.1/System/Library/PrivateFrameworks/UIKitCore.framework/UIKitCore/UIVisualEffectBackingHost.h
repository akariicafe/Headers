@class _UIVisualEffectHost, NSArray, UIVisualEffect, NSString, UIView, _UIVisualEffectEnvironment, _UIVisualEffectViewBackdropCaptureGroup;

@interface UIVisualEffectBackingHost : NSObject {
    struct { unsigned char backgroundNeedsUpdate : 1; unsigned char contentNeedsUpdate : 1; unsigned char isUpdatingSubviews : 1; unsigned char usingPlainViewForBackground : 1; } _flags;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) _UIVisualEffectEnvironment *environment;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property (retain, nonatomic) _UIVisualEffectHost *backgroundHost;
@property (retain, nonatomic) _UIVisualEffectHost *contentHost;
@property (retain, nonatomic) NSArray *visualEffectSubviews;
@property (copy, nonatomic) UIVisualEffect *visualEffect;
@property (copy, nonatomic) NSArray *contentEffects;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic, setter=_setCaptureGroupName:) NSString *_captureGroupName;

- (void)_ensureBackgroundHost;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)willGainDescendent:(id)a0;
- (void)willLoseDescendent:(id)a0;
- (void)_updateSubviews;
- (void)_configureEffects;
- (void)didMoveToWindow;
- (void)_generateBackgroundEffects:(id)a0 contentEffects:(id)a1;
- (id)_effectDescriptorForEffects:(id)a0 usage:(long long)a1;
- (void)_registerNotifications;
- (void)willMoveToWindow:(id)a0;
- (void)_updateContentViewVibrancyTraitOverride:(id)a0;
- (void)dealloc;
- (void)_ensureContentHost;
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:(id /* block */)a0;
- (void)didMoveToSuperview;
- (void)invalidateCaptureGroupName;
- (id)initForView:(id)a0;
- (id)_initialValueForKey:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void)willMoveToSuperview:(id)a0;
- (void)_generateDeferredAnimations:(id)a0;
- (void)_updateEffectForAccessibilityChanges:(id)a0;
- (void).cxx_destruct;
- (void)_unregisterNotifications;

@end
