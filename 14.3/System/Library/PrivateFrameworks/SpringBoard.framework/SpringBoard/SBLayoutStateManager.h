@interface SBLayoutStateManager : NSObject

+ (id)_initialLayoutState;
+ (Class)_layoutStateClass;

- (id)_layoutStateForApplicationTransitionContext:(id)a0;
- (id)layoutStateForApplicationTransitionContext:(id)a0;

@end
