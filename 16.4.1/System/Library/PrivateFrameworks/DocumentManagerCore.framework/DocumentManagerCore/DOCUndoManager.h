@interface DOCUndoManager : NSUndoManager

@property (class, readonly) DOCUndoManager *shared;

@property (nonatomic) BOOL shouldRemoveAllActions;

- (void)dealloc;
- (id)init;
- (void)registerUndoOperationForSender:(id)a0;
- (void)didPerformUndoableOperation;
- (BOOL)isActionOperation:(id)a0;
- (void)startUndoNotificationsObservation;
- (void)stopUndoNotificationsObservation;

@end
