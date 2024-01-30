@class NSString;
@protocol UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect;

@interface TabCollectionViewSpringLoadingBehavior : NSObject <UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect> {
    id<UISpringLoadedInteractionBehavior> _behavior;
    id<UISpringLoadedInteractionEffect> _effect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addSpringLoadedInteractionToTabView:(id)a0;

- (void)interactionDidFinish:(id)a0;
- (void)interaction:(id)a0 didChangeWithContext:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldAllowInteraction:(id)a0 withContext:(id)a1;

@end
