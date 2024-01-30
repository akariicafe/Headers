@class ARUIRingGroup, NSString, UIImage, NSArray, ARUIRenderer, ARUIRenderContext, ARUIRingGroupController, CAMetalLayer;

@interface ARUIRingsView : UIView <ARUIRingGroupDelegate> {
    ARUIRenderContext *_renderContext;
    BOOL _backgrounded;
    BOOL _inViewHierarchy;
    NSArray *_ringGroups;
    NSArray *_ringGroupControllers;
}

@property (readonly, nonatomic) ARUIRingGroup *ringGroup;
@property (readonly, nonatomic) ARUIRenderer *renderer;
@property (nonatomic) BOOL shouldBypassApplicationStateChecking;
@property (nonatomic) BOOL discardBackBuffers;
@property (nonatomic) BOOL shouldRenderOnLayout;
@property (nonatomic) BOOL shouldCheckDrawableAvailable;
@property (readonly, nonatomic) CAMetalLayer *metalLayer;
@property (readonly, nonatomic) UIImage *snapshot;
@property (readonly, nonatomic) ARUIRingGroupController *ringGroupController;
@property (readonly, nonatomic) NSArray *ringGroupControllers;
@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, nonatomic) BOOL viewIsVisible;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL synchronizesWithCA;
@property (nonatomic) double emptyRingAlpha;
@property (nonatomic) unsigned long long iconTextureRows;
@property (nonatomic) unsigned long long iconTextureColumns;
@property (retain, nonatomic) UIImage *iconSpriteImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (void)clearSharedCaches;
+ (id)ringsViewConfiguredForCompanionOfType:(long long)a0 withRenderer:(id)a1;
+ (id)ringsViewConfiguredForOneRingOnCompanionOfType:(long long)a0;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)a0;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)a0 withIcon:(BOOL)a1;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)a0 withRenderer:(id)a1;
+ (id)ringsViewConfiguredForThreeRingsOnCompanion;
+ (id)ringsViewConfiguredForThreeRingsOnCompanionWithRenderer:(id)a0;
+ (id)ringsViewConfiguredForThreeRingsOnWatch;
+ (id)ringsViewConfiguredForThreeRingsOnWatchWithRenderer:(id)a0;
+ (id)ringsViewConfiguredForWatchOfType:(long long)a0 withIcon:(BOOL)a1 renderer:(id)a2;

- (void)setOpaque:(BOOL)a0;
- (void)setContentMode:(long long)a0;
- (void)willMoveToWindow:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_didEnterBackground:(id)a0;
- (void)_willEnterForeground:(id)a0;
- (id)_anySpriteSheet;
- (id)_allRings;
- (void)_discardBackBuffers;
- (void)_sharedInitWithRingGroups:(id)a0 renderer:(id)a1;
- (void)_sharedInitWithWithRingGroupControllers:(id)a0 renderer:(id)a1;
- (BOOL)_shouldAllowRendering;
- (void)_updateRenderContext;
- (void)_updateRingGroupPauseState;
- (id)initWithRingGroup:(id)a0;
- (id)initWithRingGroup:(id)a0 renderer:(id)a1;
- (id)initWithRingGroupController:(id)a0;
- (id)initWithRingGroupController:(id)a0 renderer:(id)a1;
- (id)initWithRingGroupControllers:(id)a0;
- (id)initWithRingGroupControllers:(id)a0 renderer:(id)a1;
- (id)initWithRingGroups:(id)a0;
- (id)initWithRingGroups:(id)a0 renderer:(id)a1;
- (void)ringGroupHasUpdated:(id)a0;
- (id)ringGroups;
- (void)setActiveEnergyPercentage:(double)a0 animated:(BOOL)a1;
- (void)setActiveEnergyPercentage:(double)a0 briskPercentage:(double)a1 movingHoursPercentage:(double)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)setBriskPercentage:(double)a0 animated:(BOOL)a1;
- (void)setMovingHoursPercentage:(double)a0 animated:(BOOL)a1;

@end
