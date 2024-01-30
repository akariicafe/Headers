@class NSArray, NSString;

@interface NSUndoManager : NSObject {
    id _undoStack;
    id _redoStack;
    NSArray *_runLoopModes;
    unsigned long long _NSUndoManagerPrivate1;
    id _target;
    id _proxy;
    void *_NSUndoManagerPrivate2;
    void *_NSUndoManagerPrivate3;
}

@property (readonly) long long groupingLevel;
@property (readonly, getter=isUndoRegistrationEnabled) BOOL undoRegistrationEnabled;
@property BOOL groupsByEvent;
@property unsigned long long levelsOfUndo;
@property (copy) NSArray *runLoopModes;
@property (readonly) BOOL canUndo;
@property (readonly) BOOL canRedo;
@property (readonly, getter=isUndoing) BOOL undoing;
@property (readonly, getter=isRedoing) BOOL redoing;
@property (readonly) BOOL undoActionIsDiscardable;
@property (readonly) BOOL redoActionIsDiscardable;
@property (readonly, copy) NSString *undoActionName;
@property (readonly, copy) NSString *redoActionName;
@property (readonly, copy) NSString *undoMenuItemTitle;
@property (readonly, copy) NSString *redoMenuItemTitle;

+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)a0;
+ (void)_endTopLevelGroupings;

- (void)_scheduleAutomaticTopLevelGroupEnding;
- (id)_undoStack;
- (void)__redoCommonDoSingle:(BOOL)a0;
- (void)registerUndoWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)disableUndoRegistration;
- (void)enableUndoRegistration;
- (void)redo;
- (void)beginUndoGrouping;
- (void)_setGroupIdentifier:(id)a0;
- (void)endUndoGrouping;
- (void)undoNestedGroup;
- (id)redoMenuTitleForUndoActionName:(id)a0;
- (void)_forwardTargetInvocation:(id)a0;
- (id)prepareWithInvocationTarget:(id)a0;
- (void)_postCheckpointNotification;
- (id)_methodSignatureForTargetSelector:(SEL)a0;
- (void)_rollbackUndoGrouping;
- (void)registerUndoWithTarget:(id)a0 handler:(id /* block */)a1;
- (void)setActionName:(id)a0;
- (void)_commitUndoGrouping;
- (void)_processEndOfEventNotification:(id)a0;
- (void)_prepareEventGrouping;
- (BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)a0;
- (void)__redoSingle;
- (void)_cancelAutomaticTopLevelGroupEnding;
- (void)_delayAutomaticTermination:(double)a0;
- (void)setActionIsDiscardable:(BOOL)a0;
- (void)_registerUndoObject:(id)a0;
- (void)removeAllActionsWithTarget:(id)a0;
- (void)undo;
- (BOOL)_shouldCoalesceTypingForText:(id)a0 :(id)a1;
- (id)init;
- (void)dealloc;
- (void)removeAllActions;
- (id)undoMenuTitleForUndoActionName:(id)a0;

@end
