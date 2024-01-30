@class _UITextInputSessionUndoAction, _UITextInputSessionDeletionAction, _UITextInputSessionBeganAction, _UITextInputSessionDictationItemButtonPressAction, _UITextInputSessionSelectionAction, _UITextInputSessionReplaceWithCandidateAction, _UITextInputSessionCopyAction, _UITextInputSessionInsertionAction, _UITextInputSessionPasteAction, NSString, _UITextInputSessionDictationBeganAction, _UITextInputSessionRedoAction, _UITextInputSessionCutAction, _UITextInputSessionDictationEndedAction, _UITextInputSessionReplaceTextAction, _UITextInputSessionEndAction;

@interface _UITextInputSessionAction : NSObject

@property (nonatomic) long long source;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } relativeRangeBefore;
@property (readonly, nonatomic) BOOL changedContent;
@property (nonatomic) long long textInputActionsSource;
@property (nonatomic) long long textInputActionsType;
@property (readonly, nonatomic) long long inputActionCount;
@property (nonatomic) long long inputActionCountFromMergedActions;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *keyboardVariant;
@property (copy, nonatomic) NSString *keyboardLayout;
@property (copy, nonatomic) NSString *keyboardType;
@property (nonatomic) long long flagOptions;
@property (readonly, nonatomic) _UITextInputSessionBeganAction *asBegan;
@property (readonly, nonatomic) _UITextInputSessionEndAction *asEnd;
@property (readonly, nonatomic) _UITextInputSessionInsertionAction *asInsertion;
@property (readonly, nonatomic) _UITextInputSessionDeletionAction *asDeletion;
@property (readonly, nonatomic) _UITextInputSessionSelectionAction *asSelection;
@property (readonly, nonatomic) _UITextInputSessionCopyAction *asCopy;
@property (readonly, nonatomic) _UITextInputSessionCutAction *asCut;
@property (readonly, nonatomic) _UITextInputSessionPasteAction *asPaste;
@property (readonly, nonatomic) _UITextInputSessionUndoAction *asUndo;
@property (readonly, nonatomic) _UITextInputSessionRedoAction *asRedo;
@property (readonly, nonatomic) _UITextInputSessionDictationItemButtonPressAction *asDictationItemButtonPress;
@property (readonly, nonatomic) _UITextInputSessionDictationBeganAction *asDictationBegan;
@property (readonly, nonatomic) _UITextInputSessionDictationEndedAction *asDictationEnded;
@property (readonly, nonatomic) _UITextInputSessionReplaceTextAction *asReplaceText;
@property (readonly, nonatomic) _UITextInputSessionReplaceWithCandidateAction *asReplaceWithCandidate;

- (void).cxx_destruct;
- (id)inputModeUniqueString;
- (BOOL)isMergeableWith:(id)a0;
- (long long)mergeActionIfPossible:(id)a0;

@end
