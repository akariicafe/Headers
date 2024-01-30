@class UIWindow, NSString, NSArray, CADisplayLink, _UIDragSetDownAnimationWindow, UIViewPropertyAnimator;

@interface _UIDragSetDownAnimation : NSObject <_UIDragSetDownItemAnimationDelegate> {
    NSArray *_itemAnimations;
    id /* block */ _completion;
    BOOL _hasBegun;
    _UIDragSetDownAnimationWindow *_window;
    CADisplayLink *_displayLink;
    UIViewPropertyAnimator *_remainingItemsPropertyAnimator;
}

@property (retain, nonatomic) UIWindow *coordinateContainerWindow;
@property (readonly, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAnimateItems:(id)a0 forSource:(BOOL)a1 policyDriven:(BOOL)a2;
+ (id /* block */)defaultDropAnimationForPlatterView:(id)a0;
+ (id /* block */)defaultMultiItemAnimationForPlatterView:(id)a0;
+ (id)defaultSetDownPropertyAnimator;
+ (id /* block */)defaultSingleItemAnimationForPlatterView:(id)a0;

- (void)begin;
- (void).cxx_destruct;
- (void)_allItemAnimationsCompleted;
- (id)initWithVisibleDroppedItems:(id)a0 items:(id)a1 forSource:(BOOL)a2 policyDriven:(BOOL)a3 completion:(id /* block */)a4;
- (void)itemAnimationCompleted:(id)a0;
- (void)itemAnimationReachedTarget:(id)a0;
- (void)updateInFlightAnimationTick:(id)a0;
- (void)updateTargetedDragPreview:(id)a0 forDragItem:(id)a1;
- (void)updateVisibleDroppedItems:(id)a0;

@end
