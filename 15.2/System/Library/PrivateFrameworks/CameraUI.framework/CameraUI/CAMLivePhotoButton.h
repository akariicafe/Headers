@class NSString, CAMLivePhotoBloomView;

@interface CAMLivePhotoButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) CAMLivePhotoBloomView *_bloomView;
@property (nonatomic) long long livePhotoMode;
@property (nonatomic) BOOL allowsAutomaticMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)enablingAnimationDuration;

- (id)imageForAccessibilityHUD;
- (void)setSelectedIndex:(long long)a0;
- (void)_updateBaseImage;
- (void)reloadData;
- (id)initWithLayoutStyle:(long long)a0;
- (long long)modeForIndex:(long long)a0;
- (void)setAllowsAutomaticMode:(BOOL)a0 needsReloadData:(BOOL)a1;
- (long long)indexForMode:(long long)a0;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (void)interruptEnablingAnimation;
- (id)_availableModes;
- (long long)numberOfMenuItems;
- (void).cxx_destruct;
- (void)prepareHeaderViewForExpanding:(BOOL)a0;
- (id)headerView;
- (id)_currentBaseImage;
- (void)finishExpansionAnimated:(BOOL)a0;
- (void)performEnablingAnimation;

@end
