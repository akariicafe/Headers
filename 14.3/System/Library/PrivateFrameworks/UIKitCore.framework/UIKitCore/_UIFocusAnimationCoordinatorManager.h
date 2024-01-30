@class UIFocusAnimationCoordinator, NSNumber, NSHashTable;

@interface _UIFocusAnimationCoordinatorManager : NSObject

@property (readonly, nonatomic) NSHashTable *unfocusingItems;
@property (nonatomic) double lastFocusUpdateTime;
@property (retain, nonatomic) UIFocusAnimationCoordinator *activeFocusAnimationCoordinator;
@property (retain, nonatomic) UIFocusAnimationCoordinator *lastFocusingItemAnimationCoordinator;
@property (retain, nonatomic) NSNumber *inheritedAnimationCoordinatorActiveAnimation;

- (id)init;
- (void).cxx_destruct;
- (void)_performDelayedFocusingAnimationIfNecessary;
- (id)willUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 fromItem:(id)a1;

@end
