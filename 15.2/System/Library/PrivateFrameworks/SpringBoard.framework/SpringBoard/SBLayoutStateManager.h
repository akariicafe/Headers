@interface SBLayoutStateManager : NSObject

+ (id)_initialLayoutState;
+ (Class)_layoutStateClass;

- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (id)_layoutStateForApplicationTransitionContext:(id)a0;

@end
