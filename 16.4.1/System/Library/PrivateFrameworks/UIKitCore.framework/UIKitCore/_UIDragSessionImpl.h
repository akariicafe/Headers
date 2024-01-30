@class NSHashTable, NSString, NSArray, NSSet, UIDragInteraction, _UIInternalDraggingSessionSource, NSMutableArray, NSMutableSet, NSMapTable;

@interface _UIDragSessionImpl : NSObject <_UIDraggingSessionDelegate, UIDragSession, _UIDragSetDownAnimationTarget, _UIDragDropSessionInternal> {
    NSMutableArray *_allItems;
    NSMapTable *_dragSourceInteractionByItem;
    NSHashTable *_allInteractions;
    BOOL _didHandOffDragImage;
    NSMutableSet *_addedDraggingItemsWaitingForHandOffOfDragImage;
    NSMutableSet *_addedDragItemsPendingUpdate;
}

@property (retain, nonatomic, getter=_internalDragSession, setter=_setInternalDragSession:) _UIInternalDraggingSessionSource *internalDragSession;
@property (readonly, weak, nonatomic) UIDragInteraction *primaryInteraction;
@property (readonly, nonatomic) NSSet *trackedInteractions;
@property (nonatomic, getter=_sentSessionDidBegin, setter=_setSentSessionDidBegin:) BOOL sentSessionDidBegin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id localContext;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL allowsMoveOperation;
@property (readonly, nonatomic, getter=isRestrictedToDraggingApplication) BOOL restrictedToDraggingApplication;
@property (readonly, nonatomic, getter=_allowsItemsToUpdate) BOOL _allowsItemsToUpdate;
@property (readonly, nonatomic) long long _dataOwner;

+ (id)activeSessions;
+ (id)_localDragSessionForSessionDestination:(id)a0;

- (void)_cancelDrag;
- (BOOL)_isActive;
- (BOOL)_setDownAnimation:(id)a0 shouldDelaySetDownOfDragItem:(id)a1 completion:(id /* block */)a2;
- (id)_windowForSetDownOfDragItem:(id)a0;
- (void)_setDownAnimation:(id)a0 willAnimateSetDownOfDragItem:(id)a1 withAnimator:(id)a2;
- (id)_setDownAnimation:(id)a0 prepareForSetDownOfDragItem:(id)a1 visibleDroppedItem:(id)a2;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (id)_setDownAnimation:(id)a0 customSpringAnimationBehaviorForSetDownOfDragItem:(id)a1;
- (BOOL)_canAddItems;
- (void)_draggingSession:(id)a0 handedOffDragImageForItem:(id)a1;
- (void)_draggingSessionHandedOffDragImage:(id)a0;
- (id)_internalSession;
- (void)_itemsNeedUpdate:(id)a0;
- (void)addItems:(id)a0 forDragSourceInteraction:(id)a1;
- (BOOL)canLoadObjectsOfClass:(Class)a0;
- (id)dragSourceInteractionForDragItem:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingWithinApp:(BOOL)a1;
- (void)draggingSession:(id)a0 willAddItems:(id)a1;
- (void)draggingSessionDidEnd:(id)a0 withOperation:(unsigned long long)a1;
- (void)draggingSessionDidMove:(id)a0;
- (void)draggingSessionDidTransferItems:(id)a0;
- (BOOL)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)a0;
- (BOOL)draggingSessionPrefersFullSizePreviews:(id)a0;
- (void)draggingSessionWillBegin:(id)a0;
- (void)draggingSessionWillEnd:(id)a0 withOperation:(unsigned long long)a1;
- (BOOL)hasItemsConformingToTypeIdentifiers:(id)a0;
- (id)initWithInteraction:(id)a0;

@end
