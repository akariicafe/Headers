@class UIToolbar;

@interface BrowserToolbar : _SFToolbar

@property (readonly, nonatomic) UIToolbar *replacementToolbar;

- (void)setItems:(id)a0 animated:(BOOL)a1;
- (id)initWithPlacement:(long long)a0 hideBackground:(BOOL)a1;
- (void)setReplacementToolbar:(id)a0 tintStyle:(long long)a1 withAnimationDelay:(double)a2;
- (void)_sceneDidEnterBackground:(id)a0;
- (void)_sceneWillEnterForeground:(id)a0;
- (void)layoutSubviews;
- (void)_updateItemsForReplacementToolbar;
- (void).cxx_destruct;

@end
