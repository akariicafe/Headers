@class NSSet, NSString, UIView, UIDropInteraction;
@protocol MFDropTargetDelegate;

@interface MFDropTarget : NSObject <UIDropInteractionDelegate_Private> {
    struct { unsigned int respondsToCanDropDraggedItemsAtPoint; unsigned int respondsToDragEntered; unsigned int respondsToDragExited; unsigned int respondsToDragDidMoveToPoint; unsigned int respondsToDidDropItemsAtPoint; unsigned int respondsToDataOwner; } _delegateFlags;
}

@property (weak, nonatomic) id<MFDropTargetDelegate> delegate;
@property (weak, nonatomic) UIView *targetView;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (copy, nonatomic) NSSet *acceptableUTIs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (BOOL)_delegateHandlesDrops;
- (void)_delegateDidDropItemsWithDropSession:(id)a0;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void).cxx_destruct;
- (BOOL)_sessionContainsOnlyAcceptableTypeIdentifiers:(id)a0;
- (void)_dropSessionEnded;
- (BOOL)_delegateCanDropItemsWithDropSession:(id)a0;
- (id)initWithView:(id)a0 delegate:(id)a1;
- (void)_updateDelegateFlags;

@end
