@class UIView, NSString, UIImage, NSArray, _UIVisualEffectBackdropView, UIVisualEffect, _UIVisualEffectHost, _UIVisualEffectEnvironment, NSMutableArray, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectViewCornerMask;

@interface UIVisualEffectView : UIView <NSSecureCoding> {
    UIView *_maskView;
    UIImage *_maskImage;
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
    NSMutableArray *_captureDependents;
    _UIVisualEffectHost *_backgroundHost;
    _UIVisualEffectHost *_contentHost;
    _UIVisualEffectEnvironment *_environment;
    struct { unsigned char backgroundHostNeedsUpdate : 1; unsigned char contentHostNeedsUpdate : 1; unsigned char allowsDithering : 1; unsigned char allowsBlurring : 1; unsigned char allowsGroupFiltering : 1; unsigned char useReducedTransparencyForContentHost : 1; unsigned char isUpdatingSubviews : 1; unsigned char hasBackdropBackgroundColorAlpha : 1; } _effectViewFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setCornerRadius:) double _cornerRadius;
@property (retain, nonatomic, setter=_setCornerMask:) _UIVisualEffectViewCornerMask *_cornerMask;
@property (readonly, nonatomic) BOOL _applyCornerMaskToSelf;
@property (nonatomic, setter=_setBackdropViewBackgroundColorAlpha:) double _backdropViewBackgroundColorAlpha;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) NSArray *contentEffects;
@property (nonatomic, getter=_useLiveMasking, setter=_setUseLiveMasking:) BOOL useLiveMasking;
@property (nonatomic, getter=_isNoiseEnabled, setter=_setNoiseEnabled:) BOOL _noiseEnabled;
@property (copy, nonatomic, setter=_setGroupName:) NSString *_groupName;
@property (weak, nonatomic, setter=_setCaptureView:) _UIVisualEffectBackdropView *_captureView;
@property (nonatomic) BOOL allowsDithering;
@property (nonatomic) BOOL allowsBlurring;
@property (readonly, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
@property (copy, nonatomic, setter=_setCaptureDependents:) NSArray *_captureDependents;
@property (readonly, weak, nonatomic) UIVisualEffectView *_captureSource;
@property (nonatomic, setter=_setRenderMode:) long long _renderMode;
@property (retain, nonatomic, setter=_setMaskImage:) UIImage *_maskImage;
@property (nonatomic, setter=_setAllowsGroupFiltering:) BOOL _allowsGroupFiltering;
@property (nonatomic, getter=_useReducedTransparencyForContentEffects, setter=_setUseReducedTransparencyForContentEffects:) BOOL useReducedTransparencyForContentEffects;
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIVisualEffect *effect;

+ (Class)_contentViewClass;

- (id)_traitCollectionForChildEnvironment:(id)a0;
- (id)_debug;
- (double)_continuousCornerRadius;
- (void)_applyCornerRadiusToSubviews;
- (void)_commonInit;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (id)_colorViewBoundsOverlayCreateIfNecessary:(BOOL)a0;
- (void)_populateArchivedSubviews:(id)a0;
- (void)_unregisterNotifications;
- (id)_maskView;
- (void)dealloc;
- (void)_setCornerRadius:(double)a0 continuous:(BOOL)a1 maskedCorners:(unsigned long long)a2;
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:(id /* block */)a0;
- (void)_generateBackgroundEffects:(id)a0 contentEffects:(id)a1;
- (void)_addSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (void)_updateEffectForAlphaTransitionWillBegin:(id)a0;
- (void)setContentView:(id)a0;
- (void)_updateEffectForAlphaTransitionDidEnd:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setEffect:(id)a0;
- (id)_effectDescriptorForEffects:(id)a0 usage:(long long)a1;
- (void)_updateEffectForSnapshotWillBegin:(id)a0;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)_updateEffectForAccessibilityChanges:(id)a0;
- (void)_updateEffectForReducedTransparency;
- (id)description;
- (void)layoutSubviews;
- (void)_resetEffect;
- (id)_contentHost;
- (id)_environment;
- (void)_setMaskView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_registerNotifications;
- (void)_updateEffectForSnapshotDidEnd:(id)a0;
- (id)initWithEffect:(id)a0;
- (void)_ensureContentHostWithView:(id)a0;
- (void)_generateEffectAnimations:(id)a0;
- (void)_updateEffectsFromLegacyEffect;
- (void)_generateDeferredAnimations:(id)a0;
- (void)_updateEffectBackgroundColor;
- (void)_updateSubviews;
- (id)_backgroundHost;
- (void)traitCollectionDidChange:(id)a0;
- (void)_configureEffects;
- (id)_initialValueForKey:(id)a0;
- (void)_ensureBackgroundHost;
- (void)_updateCaptureDependents;
- (void)_updateSubView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_maskImageForMaskView:(id)a0;
- (void)_addCaptureDependent:(id)a0;
- (void)_removeCaptureDependent:(id)a0;
- (id)_whatsWrongWithThisEffect;
- (void)_setTintOpacity:(double)a0;
- (void)encodeWithCoder:(id)a0;

@end
