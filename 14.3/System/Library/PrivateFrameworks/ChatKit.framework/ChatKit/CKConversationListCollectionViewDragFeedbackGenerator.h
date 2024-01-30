@interface CKConversationListCollectionViewDragFeedbackGenerator : _UIDragSnappingFeedbackGenerator

- (void)objectSnapped;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)draggedObjectLanded;

@end
