@class UILabel, NSMutableDictionary, NSString, SBDodgingModel, NSMutableSet, NSMutableArray, SBRootDodgingLayerModifier;

@interface SBDodgingResolverViewController : UIViewController <SBChainableModifierDelegate>

@property (retain, nonatomic) SBRootDodgingLayerModifier *rootModifier;
@property (retain, nonatomic) SBDodgingModel *model;
@property (retain, nonatomic) NSMutableDictionary *itemsForIdentifiers;
@property (nonatomic) long long contentOrientation;
@property (retain, nonatomic) NSMutableArray *eventQueue;
@property (nonatomic, getter=isDispatchingEvent) BOOL dispatchingEvent;
@property (retain, nonatomic) NSMutableSet *itemsNeedingUpdate;
@property (retain, nonatomic) NSMutableSet *itemsNeedingNonAnimatedUpdate;
@property (nonatomic) BOOL needsModelUpdate;
@property (nonatomic) BOOL needsLayout;
@property (retain, nonatomic) UILabel *debugOverlay;
@property (nonatomic) unsigned long long lastUpdateTimeNS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performEventResponse:(id)a0;
- (void)viewDidLoad;
- (void)_handleEventResponse:(id)a0;
- (void)_setNeedsLayout;
- (void)_updateLayoutIfNeeded;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)interfaceOrientation;
- (void)_updateItemsIfNeeded;
- (id)preferenceForIdentifier:(id)a0;
- (void)performTransitionFromOrientation:(long long)a0 toOrientation:(long long)a1 animated:(BOOL)a2 mutationBlock:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewBounds;
- (double)spaceBetweenIdentifiers;
- (id)addItemWithIdentifier:(id)a0 view:(id)a1 initialCenter:(struct CGPoint { double x0; double x1; })a2 initialSize:(struct CGSize { double x0; double x1; })a3 delegate:(id)a4;
- (void)setItemNeedsUpdate:(id)a0 animated:(BOOL)a1;
- (id)invalidateItem:(id)a0;
- (void)_dispatchOrAppendEvent:(id)a0;
- (void)_updateItemIfNeeded:(id)a0;
- (void)_setAllItemsNeedUpdate;
- (void)_dispatchNextEventIfNeededAndHandleResponse;
- (void)_updateModelIfNeeded;
- (void)_updateLayoutWithItemIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_performInvalidationResponse:(id)a0;
- (void)_performScheduleEventResponse:(id)a0;
- (void)_setItemNeedsUpdate:(id)a0;
- (void)_setNeedsModelUpdate;

@end
