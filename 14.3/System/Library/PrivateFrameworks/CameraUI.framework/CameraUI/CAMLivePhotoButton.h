@class UIImageView, CAMLivePhotoAnimationCache, NSString;

@interface CAMLivePhotoButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) UIImageView *_imageView;
@property (retain, nonatomic) CAMLivePhotoAnimationCache *_animationCache;
@property (nonatomic) long long livePhotoMode;
@property (nonatomic) BOOL allowsAutomaticMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)enablingAnimationDuration;

- (long long)indexForMode:(long long)a0;
- (long long)modeForIndex:(long long)a0;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (void)prepareHeaderViewForExpanding:(BOOL)a0;
- (long long)numberOfMenuItems;
- (void)reloadData;
- (id)initWithLayoutStyle:(long long)a0;
- (id)imageForAccessibilityHUD;
- (void)setSelectedIndex:(long long)a0;
- (id)_availableModes;
- (void).cxx_destruct;
- (void)interruptEnablingAnimation;
- (id)headerView;
- (void)_loadAnimationCacheIfNeeded;
- (void)preloadEnablingAnimation;
- (void)_updateAnimationImages;
- (void)_updateBaseImage;
- (void)performEnablingAnimation;
- (void)setAllowsAutomaticMode:(BOOL)a0 needsReloadData:(BOOL)a1;
- (id)_currentBaseImage;
- (void)finishExpansionAnimated:(BOOL)a0;

@end
