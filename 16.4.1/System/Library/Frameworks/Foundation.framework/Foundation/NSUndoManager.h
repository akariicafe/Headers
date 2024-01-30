@class NSArray, NSString, _NSUndoStack, NSObject;
@protocol OS_dispatch_source;

@interface NSUndoManager : NSObject {
    _NSUndoStack *_undoStack;
    _NSUndoStack *_redoStack;
    NSArray *_runLoopModes;
    unsigned long long _flags;
    id _target;
    id _proxy;
    NSObject<OS_dispatch_source> *_automaticTerminationSource;
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

+ (void)initialize;
+ (void)_endTopLevelGroupings;
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)a0;

- (void)setActionName:(id)a0;
- (void)redo;
- (void)undo;
- (void)dealloc;
- (id)init;
- (void)removeAllActions;
- (void)_setGroupIdentifier:(id)a0;
- (void)_processEndOfEventNotification:(id)a0;
- (void)registerUndoWithTarget:(id)a0 handler:(id /* block */)a1;
- (void)__redoSingle;
- (void)undoNestedGroup;
- (void)endUndoGrouping;
- (id)redoMenuTitleForUndoActionName:(id)a0;
- (void)__redoCommonDoSingle:(BOOL)a0;
- (id)undoMenuTitleForUndoActionName:(id)a0;
- (void)_cancelAutomaticTopLevelGroupEnding;
- (void)_commitUndoGrouping;
- (void)_delayAutomaticTermination:(double)a0;
- (BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)a0;
- (void)_forwardTargetInvocation:(id)a0;
- (id)_methodSignatureForTargetSelector:(SEL)a0;
- (void)_postCheckpointNotification;
- (void)_prepareEventGrouping;
- (void)_registerUndoObject:(id)a0;
- (void)_registerUndoWithTarget:(id)a0 handler:(id /* block */)a1;
- (void)_rollbackUndoGrouping;
- (void)_scheduleAutomaticTopLevelGroupEnding;
- (BOOL)_shouldCoalesceTypingForText:(id)a0 :(id)a1;
- (id)_undoStack;
- (void)beginUndoGrouping;
- (void)disableUndoRegistration;
- (void)enableUndoRegistration;
- (id)prepareWithInvocationTarget:(id)a0;
- (void)registerUndoWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)removeAllActionsWithTarget:(id)a0;
- (void)setActionIsDiscardable:(BOOL)a0;

@end
