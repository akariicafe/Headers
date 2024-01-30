@class UIImageView, NSString;

@interface CAMFlashButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) UIImageView *_glyphView;
@property (readonly, nonatomic) UIImageView *_warningIndicatorView;
@property (nonatomic) long long flashMode;
@property (nonatomic) BOOL allowsAutomaticFlash;
@property (nonatomic, getter=isUnavailable) BOOL unavailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)indexForMode:(long long)a0;
- (double)padHeaderViewContentInsetLeft;
- (long long)modeForIndex:(long long)a0;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (void)prepareHeaderViewForExpanding:(BOOL)a0;
- (long long)numberOfMenuItems;
- (void)_updateCurrentGlyphImage;
- (void)reloadData;
- (void)setAllowsAutomaticFlash:(BOOL)a0 needsReloadData:(BOOL)a1;
- (id)initWithLayoutStyle:(long long)a0;
- (id)imageForAccessibilityHUD;
- (void).cxx_destruct;
- (id)headerView;
- (BOOL)shouldIgnoreMenuInteraction;
- (void)_commonCAMFlashButtonInitialization;
- (id)_currentGlyphImageForAccessibilityHUD:(BOOL)a0;
- (BOOL)wantsSelectedItemToBeVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)collapsedSelectedLabelHorizontalMargin;

@end
