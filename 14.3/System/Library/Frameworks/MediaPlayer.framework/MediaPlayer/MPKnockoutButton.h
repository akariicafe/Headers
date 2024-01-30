@interface MPKnockoutButton : MPButton

+ (id)easyTouchButtonWithType:(long long)a0;

- (void)setSelected:(BOOL)a0;
- (void)_updateForStateChangeAnimated:(BOOL)a0;
- (void)didMoveToSuperview;
- (BOOL)_drawingAsSelected;
- (void)_updateSelected:(BOOL)a0 highlighted:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;

@end
