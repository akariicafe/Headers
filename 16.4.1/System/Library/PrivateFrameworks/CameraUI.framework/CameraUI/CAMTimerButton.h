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

- (void)setDuration:(long long)a0 animated:(BOOL)a1;
- (id)initWithLayoutStyle:(long long)a0;
- (id)shownIndexesWhileCollapsed;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (id)_currentGlyphImageForAccessibiliyHUD:(BOOL)a0;
- (void)_commonCAMTimerButtonInitialization;
- (void)setHideOffWhenCollapsed:(BOOL)a0 needsReloadData:(BOOL)a1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfMenuItems;
- (id)headerView;
- (id)imageForAccessibilityHUD;
- (void)_updateCurrentGlyphImage;
- (double)padHeaderViewContentInsetLeft;
- (void).cxx_destruct;

@end
