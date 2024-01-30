@class _UITextInputSessionBeganAction, _UITextInputSessionSelectionAction, _UITextInputSessionUndoAction, _UITextInputSessionRedoAction, _UITextInputSessionInsertionAction, _UITextInputSessionDeletionAction;

@interface _UITextInputSessionAction : NSObject

@property (nonatomic) long long source;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } relativeRangeBefore;
@property (readonly, nonatomic) BOOL changedContent;
@property (readonly, nonatomic) _UITextInputSessionBeganAction *asBegan;
@property (readonly, nonatomic) _UITextInputSessionInsertionAction *asInsertion;
@property (readonly, nonatomic) _UITextInputSessionDeletionAction *asDeletion;
@property (readonly, nonatomic) _UITextInputSessionSelectionAction *asSelection;
@property (readonly, nonatomic) _UITextInputSessionUndoAction *asUndo;
@property (readonly, nonatomic) _UITextInputSessionRedoAction *asRedo;

- (long long)mergeActionIfPossible:(id)a0;

@end
