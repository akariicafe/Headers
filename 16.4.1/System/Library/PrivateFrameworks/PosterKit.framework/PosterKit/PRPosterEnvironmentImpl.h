@class PRPosterMutableConfiguredProperties, NSString, FBSSceneSettings, PRPosterConfigurableOptions, UITraitCollection, CSProminentLayoutController, PRMutablePosterConfiguration, UIColor;
@protocol PRPosterContentsInternal, PRPosterContents;

@interface PRPosterEnvironmentImpl : NSObject <NSCopying, PRPosterRenderingEnvironment_Private, PRPosterEditingEnvironment> {
    FBSSceneSettings *_settings;
    PRMutablePosterConfiguration *_targetConfig;
    id<PRPosterContentsInternal> _lock_sourceContents;
    PRPosterConfigurableOptions *_lock_sourceConfigurableOptions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PRPosterMutableConfiguredProperties *_lock_targetConfiguredProperties;
    CSProminentLayoutController *_layoutController;
}

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic, getter=isDepthEffectDisallowed) BOOL depthEffectDisallowed;
@property (readonly, nonatomic) long long luminance;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumContentSize;
@property (nonatomic) double backlightProgress;
@property (nonatomic) double linearBacklightProgress;
@property (nonatomic) double unlockProgress;
@property (nonatomic) BOOL wakeSourceIsSwipeToUnlock;
@property (readonly, nonatomic) PRPosterConfigurableOptions *sourceConfigurableOptions;
@property (readonly, nonatomic) PRPosterMutableConfiguredProperties *targetConfiguredProperties;
@property (readonly, nonatomic, getter=isFloatingViewSnapshot) BOOL floatingViewSnapshot;
@property (readonly, nonatomic, getter=isPreview) BOOL preview;
@property (readonly, nonatomic, getter=isSnapshot) BOOL snapshot;
@property (readonly, nonatomic, getter=isLowLuminance) BOOL lowLuminance;
@property (readonly, nonatomic) BOOL andromeda;
@property (readonly, nonatomic) id<PRPosterContents> contents;
@property (readonly, nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } desiredContentSize;
@property (readonly, nonatomic) UIColor *caseColor;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentCutoutBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } floatingObscurableBounds;
@property (readonly, nonatomic) unsigned long long significantEventsCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PRPosterContents> sourceContents;
@property (readonly, nonatomic) PRMutablePosterConfiguration *targetConfiguration;

- (id)_initWithSceneSettings:(id)a0 traitCollection:(id)a1 targetConfig:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalizedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_lock_hydratePosterContents:(out id *)a0 sourceConfigurableOptions:(out id *)a1 targetConfigurableProperties:(out id *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_applyToSceneSettings:(id)a0;
- (id)_targetConfiguredProperties;
- (void)_appendDescriptionToStream:(id)a0;
- (void).cxx_destruct;

@end
