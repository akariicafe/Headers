@class _UICompoundObjectMap;

@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState

@property (retain, nonatomic) _UICompoundObjectMap *capturedProperties;

- (void).cxx_destruct;
- (id)init;
- (id)actionForLayer:(id)a0 forKey:(id)a1 forView:(id)a2;

@end
