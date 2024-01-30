@class UIDragInteraction, NSString, UIView;
@protocol CNComposeDragSourceDelegate;

@interface CNComposeDragSource : NSObject <UIDragInteractionDelegate_Private> {
    struct { BOOL respondsToTeamDataForItem; BOOL respondsToTargetedPreviewForItem; BOOL respondsToPreviewForItem; BOOL respondsToSuggestedNameForItem; BOOL respondsToLocalObjectForItem; BOOL respondsToDragWillEnd; BOOL respondsToAllowsMoveOperation; BOOL respondsToIsRestrictedToMail; BOOL respondsToDataOwner; } _delegateFlags;
}

@property (weak, nonatomic) id<CNComposeDragSourceDelegate> delegate;
@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property (readonly, weak, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL allowsDragOverridingMasterSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dragInteraction:(id)a0 session:(id)a1 willEndWithOperation:(unsigned long long)a2;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (id)initWithView:(id)a0 delegate:(id)a1;
- (BOOL)dragInteraction:(id)a0 sessionIsRestrictedToDraggingApplication:(id)a1;
- (BOOL)dragInteraction:(id)a0 sessionAllowsMoveOperation:(id)a1;
- (void).cxx_destruct;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;

@end
