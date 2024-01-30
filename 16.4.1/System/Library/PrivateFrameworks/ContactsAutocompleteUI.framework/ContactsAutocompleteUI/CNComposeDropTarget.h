@class NSSet, NSString, UIView, UIDropInteraction;
@protocol CNComposeDropTargetDelegate;

@interface CNComposeDropTarget : NSObject <UIDropInteractionDelegate_Private> {
    struct { unsigned int respondsToCanDropDraggedItemsAtPoint; unsigned int respondsToDragEntered; unsigned int respondsToDragExited; unsigned int respondsToDragDidMoveToPoint; unsigned int respondsToDidDropItemsAtPoint; unsigned int respondsToDataOwner; unsigned int respondsToShouldHandleDroppedContacts; unsigned int respondsToSendingAddressForTargetView; unsigned int respondsToAddressKind; unsigned int respondsToComposeRecipientsForDroppedContacts; } _delegateFlags;
}

@property (weak, nonatomic) id<CNComposeDropTargetDelegate> delegate;
@property (weak, nonatomic) UIView *targetView;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (copy, nonatomic) NSSet *acceptableUTIs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (id)initWithView:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)_updateDelegateFlags;
- (BOOL)_delegateCanDropItemsWithDropSession:(id)a0;
- (void)_delegateDidDropItemsWithDropSession:(id)a0;
- (BOOL)_delegateHandlesDrops;
- (void)_dropSessionEnded;
- (BOOL)_sessionContainsOnlyAcceptableTypeIdentifiers:(id)a0;
- (void)addContactItemsToTargetViewFromSession:(id)a0;
- (void)addDroppedContacts:(id)a0 toTargetView:(id)a1 forSession:(id)a2;
- (BOOL)canLoadContactObjectsFromSession:(id)a0;
- (unsigned long long)composeAddressKind:(unsigned long long)a0;
- (id)emailRecipientForContact:(id)a0;
- (void)handleDropOfContactItemProviders:(id)a0;
- (BOOL)handlesDroppedContacts;
- (BOOL)shouldHandleContactItemsFromSession:(id)a0;
- (id)unifiedEmailRecipientForContact:(id)a0;

@end
