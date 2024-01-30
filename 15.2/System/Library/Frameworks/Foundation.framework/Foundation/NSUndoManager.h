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

- (void)registerUndoWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (id)_undoStack;
- (void)setActionName:(id)a0;
- (void)_scheduleAutomaticTopLevelGroupEnding;
- (void)__redoSingle;
- (id)_methodSignatureForTargetSelector:(SEL)a0;
- (void)_processEndOfEventNotification:(id)a0;
- (id)undoMenuTitleForUndoActionName:(id)a0;
- (void)_cancelAutomaticTopLevelGroupEnding;
- (id)redoMenuTitleForUndoActionName:(id)a0;
- (void)registerUndoWithTarget:(id)a0 handler:(id /* block */)a1;
- (BOOL)_shouldCoalesceTypingForText:(id)a0 :(id)a1;
- (void)endUndoGrouping;
- (void)undoNestedGroup;
- (BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)a0;
- (void)_forwardTargetInvocation:(id)a0;
- (void)beginUndoGrouping;
- (void)_registerUndoObject:(id)a0;
- (void)_rollbackUndoGrouping;
- (void)enableUndoRegistration;
- (void)_prepareEventGrouping;
- (void)__redoCommonDoSingle:(BOOL)a0;
- (void)_delayAutomaticTermination:(double)a0;
- (void)_postCheckpointNotification;
- (id)prepareWithInvocationTarget:(id)a0;
- (void)removeAllActionsWithTarget:(id)a0;
- (void)disableUndoRegistration;
- (void)setActionIsDiscardable:(BOOL)a0;
- (id)init;
- (void)_commitUndoGrouping;
- (void)undo;
- (void)redo;
- (void)_setGroupIdentifier:(id)a0;
- (void)removeAllActions;
- (void)dealloc;

@end
