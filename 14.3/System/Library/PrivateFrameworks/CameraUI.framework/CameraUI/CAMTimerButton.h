@class UIImageView, NSString;
@protocol CAMTimerButtonDelegate;

@interface CAMTimerButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) UIImageView *_glyphView;
@property (weak, nonatomic) id<CAMTimerButtonDelegate> delegate;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL hideOffWhenCollapsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)padHeaderViewContentInsetLeft;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (long long)numberOfMenuItems;
- (void)_updateCurrentGlyphImage;
- (void)reloadData;
- (id)initWithLayoutStyle:(long long)a0;
- (id)imageForAccessibilityHUD;
- (void).cxx_destruct;
- (id)shownIndexesWhileCollapsed;
- (id)_currentGlyphImageForAccessibiliyHUD:(BOOL)a0;
- (id)headerView;
- (void)setDuration:(long long)a0 animated:(BOOL)a1;
- (void)_commonCAMTimerButtonInitialization;
- (void)setHideOffWhenCollapsed:(BOOL)a0 needsReloadData:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
