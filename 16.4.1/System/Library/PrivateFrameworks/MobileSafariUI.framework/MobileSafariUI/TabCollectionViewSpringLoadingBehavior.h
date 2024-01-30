@class NSString;
@protocol TabCollectionView, TabCollectionViewDragDropSupport, UISpringLoadedInteractionEffect, UISpringLoadedInteractionBehavior;

@interface TabCollectionViewSpringLoadingBehavior : NSObject <UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect> {
    id<UISpringLoadedInteractionBehavior> _behavior;
    id<UISpringLoadedInteractionEffect> _effect;
}

@property (weak, nonatomic) id<TabCollectionView, TabCollectionViewDragDropSupport> tabView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addSpringLoadedInteractionToTabView:(id)a0;

- (BOOL)shouldAllowInteraction:(id)a0 withContext:(id)a1;
- (void)interaction:(id)a0 didChangeWithContext:(id)a1;
- (id)init;
- (void)interactionDidFinish:(id)a0;
- (void).cxx_destruct;

@end
