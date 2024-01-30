@class TSDInteractiveCanvasController, NSMutableSet, TSDAutoscroll;

@interface TSDDynamicOperationController : NSObject {
    TSDInteractiveCanvasController *mICC;
    BOOL mOperationIsDynamic;
    BOOL mResetGuides;
    BOOL mSupportsAlignmentGuides;
    BOOL mPossibleDynamicOperation;
    TSDAutoscroll *mAutoscroll;
}

@property (readonly, nonatomic) NSMutableSet *allTransformedReps;
@property (readonly, nonatomic) NSMutableSet *currentlyTransformingReps;

- (void)dealloc;
- (void)endOperation;
- (id)initWithInteractiveCanvasController:(id)a0;
- (void)cancelOperation;
- (void)beginOperation;
- (void)handleGestureRecognizer:(id)a0;
- (BOOL)isInOperation;
- (BOOL)isInPossibleDynamicOperation;
- (void)stopTransformingReps:(id)a0;
- (void)startTransformingReps:(id)a0;
- (void)p_beginDynamicOperationForReps:(id)a0;
- (void)p_controllingTMDidResetInOperation:(id)a0;
- (void)p_cleanupOperation;
- (void)p_resetGuidesForCleanup:(BOOL)a0;
- (void)beginPossibleDynamicOperation;
- (BOOL)isOperationDynamic;
- (void)handleTrackerManipulator:(id)a0;
- (void)invalidateGuides;

@end
