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

- (id)imageForAccessibilityHUD;
- (void)reloadData;
- (id)initWithLayoutStyle:(long long)a0;
- (void)_updateCurrentGlyphImage;
- (BOOL)shouldIgnoreMenuInteraction;
- (long long)modeForIndex:(long long)a0;
- (long long)indexForMode:(long long)a0;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (void)setAllowsAutomaticFlash:(BOOL)a0 needsReloadData:(BOOL)a1;
- (id)_currentGlyphImageForAccessibilityHUD:(BOOL)a0;
- (double)collapsedSelectedLabelHorizontalMargin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsSelectedItemToBeVisible;
- (void)_commonCAMFlashButtonInitialization;
- (long long)numberOfMenuItems;
- (void).cxx_destruct;
- (void)prepareHeaderViewForExpanding:(BOOL)a0;
- (id)headerView;
- (double)padHeaderViewContentInsetLeft;

@end
