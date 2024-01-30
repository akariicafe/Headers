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

- (void)performEnablingAnimation;
- (void)setSelectedIndex:(long long)a0;
- (void)_updateBaseImage;
- (id)initWithLayoutStyle:(long long)a0;
- (void)prepareHeaderViewForExpanding:(BOOL)a0;
- (id)_currentBaseImage;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (void)reloadData;
- (long long)numberOfMenuItems;
- (id)headerView;
- (id)_availableModes;
- (id)imageForAccessibilityHUD;
- (void)setAllowsAutomaticMode:(BOOL)a0 needsReloadData:(BOOL)a1;
- (void)finishExpansionAnimated:(BOOL)a0;
- (long long)modeForIndex:(long long)a0;
- (void)interruptEnablingAnimation;
- (long long)indexForMode:(long long)a0;
- (void).cxx_destruct;

@end
