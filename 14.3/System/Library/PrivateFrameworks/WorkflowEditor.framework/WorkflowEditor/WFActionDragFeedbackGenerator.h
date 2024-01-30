@class NSDate;

@interface WFActionDragFeedbackGenerator : WFDragFeedbackGenerator

@property (retain, nonatomic) NSDate *lastDragStartDate;
@property (nonatomic) BOOL initializedReorderSound;
@property (nonatomic) unsigned int reorderSound;

- (void).cxx_destruct;
- (void)dealloc;
- (void)draggingStarted;
- (void)draggingInsertedActions:(id)a0 intoWorkflow:(id)a1 atIndex:(unsigned long long)a2;
- (void)draggingRemovedActions:(id)a0;
- (void)draggingMovedActions:(id)a0 fromIndexes:(id)a1 toIndexes:(id)a2 inWorkflow:(id)a3;
- (void)draggingActionsEnteredDeletionZone:(id)a0;
- (void)draggingItemSnapped;
- (void)playReorderSound;

@end
