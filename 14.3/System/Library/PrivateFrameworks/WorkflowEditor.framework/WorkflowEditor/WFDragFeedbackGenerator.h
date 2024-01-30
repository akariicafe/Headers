@class _UIDragSnappingFeedbackGenerator;

@interface WFDragFeedbackGenerator : NSObject

@property (nonatomic) long long activeDragSessions;
@property (weak, nonatomic) _UIDragSnappingFeedbackGenerator *feedbackGenerator;

- (void)userInteractionCancelled;
- (void)userInteractionStarted;
- (void)objectSnapped;
- (void)userInteractionEnded;
- (void)dropTargetUpdated;
- (id)initWithCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)positionUpdated;
- (void)draggingStarted;
- (void)draggedObjectLifted;
- (void)performFeedbackWithDelay:(double)a0 insideBlock:(id /* block */)a1;
- (void)draggedObjectLanded;
- (void)draggingCancelled;
- (void)draggingItemDropped;
- (void)draggingPositionUpdated;
- (void)draggingItemSnapped;

@end
