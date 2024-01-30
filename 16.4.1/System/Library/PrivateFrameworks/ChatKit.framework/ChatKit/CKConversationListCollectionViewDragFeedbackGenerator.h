@interface CKConversationListCollectionViewDragFeedbackGenerator : _UIDragSnappingFeedbackGenerator

- (void)dropTargetUpdated;
- (void)objectSnapped;
- (void)positionUpdated;
- (void)draggedObjectLanded;

@end
