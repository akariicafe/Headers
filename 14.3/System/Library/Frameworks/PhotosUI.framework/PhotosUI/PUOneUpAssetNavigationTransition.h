@class NSString;

@interface PUOneUpAssetNavigationTransition : PUNavigationTransition <PUOneUpAssetTransition>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)animatePushTransition;
- (void)_animateTransitionWithOperation:(long long)a0;
- (void)animatePopTransition;
- (void)_prepareViewForTransition;

@end
