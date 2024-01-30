@class NSMapTable, UIGestureGraph, NSMutableSet, NSMutableArray;

@interface UIGestureEnvironment : NSObject {
    struct __CFRunLoopObserver { } *_gestureEnvironmentUpdateObserver;
    NSMutableSet *_gestureRecognizersNeedingUpdate;
    NSMutableSet *_gestureRecognizersNeedingReset;
    NSMutableSet *_gestureRecognizersNeedingRemoval;
    NSMutableArray *_dirtyGestureRecognizers;
    NSMutableArray *_delayedTouches;
    NSMutableArray *_delayedTouchesToSend;
    NSMutableArray *_delayedPresses;
    NSMutableArray *_delayedPressesToSend;
    NSMutableArray *_preUpdateActions;
    BOOL _dirtyGestureRecognizersUnsorted;
    BOOL _updateExclusivity;
    BOOL _isUpdatingGestureEnvironment;
    UIGestureGraph *_dependencyGraph;
    NSMapTable *_nodesByGestureRecognizer;
}

- (void)addGestureRecognizer:(id)a0;
- (void)removeGestureRecognizer:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
