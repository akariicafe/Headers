@class _UIDragSnappingFeedbackGenerator;

@interface WFDragFeedbackGenerator : NSObject

@property (nonatomic) long long activeDragSessions;
@property (retain, nonatomic) _UIDragSnappingFeedbackGenerator *feedbackGenerator;

- (void)userInteractionEnded;
- (void)dropTargetUpdated;
- (void)userInteractionStarted;
- (void)userInteractionCancelled;
- (void)objectSnapped;
- (void)draggedObjectLifted;
- (id)initWithCollectionView:(id)a0;
- (void)positionUpdated;
- (void)draggedObjectLanded;
- (id)init;
- (void).cxx_destruct;
- (void)draggingStarted;
- (void)performFeedbackWithDelay:(double)a0 insideBlock:(id /* block */)a1;
- (void)draggingCancelled;
- (void)draggingItemDropped;
- (void)draggingItemSnapped;
- (void)draggingPositionUpdated;

@end
