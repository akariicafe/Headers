@class _UICompoundObjectMap;

@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState

@property (retain, nonatomic) _UICompoundObjectMap *capturedProperties;

- (id)init;
- (void).cxx_destruct;
- (id)actionForLayer:(id)a0 forKey:(id)a1 forView:(id)a2;

@end
