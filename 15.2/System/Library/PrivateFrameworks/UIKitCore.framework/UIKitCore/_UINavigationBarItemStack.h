@class NSMutableArray, NSArray, _UINavigationBarTransitionAssistant, UINavigationItem, _UINavigationBarItemStackEntry;
@protocol _UINavigationItemChangeObserver;

@interface _UINavigationBarItemStack : NSObject {
    NSArray *_previousItems;
    NSMutableArray *_items;
}

@property (weak, nonatomic) id<_UINavigationItemChangeObserver> changeObserver;
@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) _UINavigationBarTransitionAssistant *transitionAssistant;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *topEntry;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *backEntry;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *previousTopEntry;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *previousBackEntry;
@property (readonly, nonatomic) UINavigationItem *topItem;
@property (readonly, nonatomic) UINavigationItem *backItem;
@property (readonly, nonatomic) UINavigationItem *previousTopItem;
@property (readonly, nonatomic) UINavigationItem *previousBackItem;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) long long itemCount;
@property (readonly, nonatomic, getter=isPushingOrPopping) BOOL pushingOrPopping;
@property (readonly, nonatomic, getter=isPushing) BOOL pushing;
@property (readonly, nonatomic, getter=isPopping) BOOL popping;

- (id)initWithItems:(id)a0;
- (long long)_effectiveDisplayModeForItem:(id)a0 inStack:(id)a1;
- (void)beginInteractiveTransition;
- (void)_prepareTransitionWithAssistant:(id)a0;
- (long long)effectiveDisplayModeForItemInPreviousStack:(id)a0;
- (void)iterateEntries:(id /* block */)a0;
- (void)_completeTransition;
- (id)description;
- (void)completeOperation;
- (void)popItemWithTransitionAssistant:(id)a0;
- (void)pushItem:(id)a0 withTransitionAssistant:(id)a1;
- (void).cxx_destruct;
- (void)reverseIterateEntries:(id /* block */)a0;
- (void)_updateChangeObserversFor:(id)a0;
- (id)init;
- (void)setItems:(id)a0 withTransitionAssistant:(id)a1;
- (void)cancelOperation;
- (long long)effectiveDisplayModeForItemInCurrentStack:(id)a0;
- (BOOL)stackItemsAreEqualTo:(id)a0;
- (void)iterateItems:(id /* block */)a0;
- (void)_shim_pushNestedNavigationItem:(id)a0;
- (id)_shim_popNestedNavigationItem;
- (void)_cleanupTransitionAssistant;
- (void)endInteractiveTransition;

@end
