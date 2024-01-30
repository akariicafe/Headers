@class NSSet, NSMutableSet;

@interface HUScrollGestureRecognitionResolver : NSObject

@property (readonly, nonatomic) NSMutableSet *mutablePanGestureReocgnizers;
@property (readonly, nonatomic) NSMutableSet *conflictingGestureStates;
@property (nonatomic) double conflictingGestureActivationDelay;
@property (readonly, nonatomic) NSSet *panGestureRecognizers;
@property (readonly, nonatomic) NSSet *conflictingGestureRecognizers;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePanGesture:(id)a0;
- (void)removePanGestureRecognizer:(id)a0;
- (void)_removeConflictingGestureState:(id)a0;
- (id)_stateForConflictingGestureRecognizer:(id)a0;
- (void)_handleConflictingGesture:(id)a0;
- (void)_cancelConflictingGestures;
- (void)_clearSimultaenouslyRecognizedGestures;
- (void)_activeTimerDidFireForOtherGesture:(id)a0;
- (void)addPanGestureRecognizer:(id)a0;
- (void)addConflictingGestureRecognizer:(id)a0;
- (void)removeConflictingGestureRecognizer:(id)a0;

@end
