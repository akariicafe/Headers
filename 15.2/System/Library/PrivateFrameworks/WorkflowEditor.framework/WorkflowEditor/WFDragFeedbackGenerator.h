@class _UIDragSnappingFeedbackGenerator;

@interface WFDragFeedbackGenerator : NSObject

@property (nonatomic) long long activeDragSessions;
@property (retain, nonatomic) _UIDragSnappingFeedbackGenerator *feedbackGenerator;

- (void)dropTargetUpdated;
- (void)userInteractionStarted;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (id)initWithCollectionView:(id)a0;
- (void)positionUpdated;
- (void)draggingStarted;
- (void).cxx_destruct;
- (id)init;
- (void)performFeedbackWithDelay:(double)a0 insideBlock:(id /* block */)a1;
- (void)objectSnapped;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (void)draggingPositionUpdated;
- (void)draggingItemSnapped;
- (void)draggingItemDropped;
- (void)draggingCancelled;

@end
