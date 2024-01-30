@interface CKConversationListCollectionViewDragFeedbackGenerator : _UIDragSnappingFeedbackGenerator

- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)objectSnapped;
- (void)draggedObjectLanded;

@end
