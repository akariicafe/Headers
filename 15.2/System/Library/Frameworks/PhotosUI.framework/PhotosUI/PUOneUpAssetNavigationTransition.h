@class NSString;

@interface PUOneUpAssetNavigationTransition : PUNavigationTransition <PUOneUpAssetTransition>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animatePushTransition;
- (void)animatePopTransition;
- (id)init;
- (void)_animateTransitionWithOperation:(long long)a0;
- (void)_prepareViewForTransition;

@end
