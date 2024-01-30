@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle

@property (nonatomic) int outDirection;

+ (id)animationStyleAnimated:(BOOL)a0 duration:(double)a1 outDirection:(int)a2;

- (id)controllerForStartPlacement:(id)a0 endPlacement:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)startPlacementForInputViewSet:(id)a0 currentPlacement:(id)a1 windowScene:(id)a2;
- (BOOL)canDismissWithScrollView;
- (id)endPlacementForInputViewSet:(id)a0 windowScene:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
