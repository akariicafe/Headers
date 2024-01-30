@class NSString, PKTextInputHandwritingShot, PKTextInputElementContent, PKTextInputTargetState, CHTextInputQueryItem;
@protocol PKTextInputResultCommandDelegate;

@interface PKTextInputResultCommand : NSObject

@property (nonatomic, setter=_setCommandState:) long long commandState;
@property (copy, nonatomic) PKTextInputTargetState *initialInputTargetState;
@property (retain, nonatomic) PKTextInputTargetState *_inProgressInputTargetState;
@property (copy, nonatomic) PKTextInputTargetState *finalInputTargetState;
@property (copy, nonatomic) NSString *committedText;
@property (nonatomic) long long committedTokenColumnCount;
@property (copy, nonatomic) NSString *commitReason;
@property (nonatomic) BOOL resultedInTargetChange;
@property (nonatomic) BOOL hasPendingUncommittedChanges;
@property (nonatomic) BOOL destinationFrameForAnimationMightMove;
@property (nonatomic) BOOL _applyIntermediateChange;
@property (weak, nonatomic) id<PKTextInputResultCommandDelegate> delegate;
@property (readonly, nonatomic) CHTextInputQueryItem *queryItem;
@property (readonly, nonatomic) PKTextInputHandwritingShot *handwritingShot;
@property (readonly, nonatomic) PKTextInputElementContent *targetElementContent;
@property (readonly, nonatomic) long long immediateCommitType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } affectedRange;

+ (long long)_commitableTokenColumnCountForQueryItem:(id)a0 previousQueryItem:(id)a1 immediateCommitType:(long long)a2 applyIntermediateChange:(BOOL)a3 preferredUncommittedTokenColumnCount:(long long)a4 commitReason:(id *)a5;
+ (void)_getTextsToCommit:(id *)a0 alternativesTable:(id *)a1 uncommittedPendingText:(id *)a2 fromCorrectionResult:(id)a3 commitTokenColumnCount:(long long)a4 forTargetElementContent:(id)a5 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6;
+ (BOOL)_isAccidentalReplacementForQueryItem:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 handwritingShot:(id)a2;
+ (id)_tokenColumnStringsForTopTranscriptionInTextResult:(id)a0;
+ (id)_transcriptionForTokensAtColumn:(long long)a0 row:(long long)a1 textResult:(id)a2;
+ (id)_alternativesForTranscriptionAtColumn:(long long)a0 textResult:(id)a1 columnTopTranscription:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (void)_scheduleBecomeReadyAfterDelay:(double)a0;
- (void)_clearPreviousActivePreviewIfNeededForCancellation:(BOOL)a0;
- (BOOL)isImmediateCommit;
- (void)_applyResultCommandPhase2;
- (void)_finishApplyingResultWithSuccess:(BOOL)a0 cancelled:(BOOL)a1;
- (void)_applyResultCommandPhase3WithCompletion:(id /* block */)a0;
- (void)_updateInputTargetStateWithUncommittedPendingText:(id)a0 activePreviewText:(id)a1 committedTextLength:(long long)a2 accumulatedCommitLength:(long long)a3;
- (id)_strokeSliceIDsToRemoveForCommittedTokenColumnCount:(long long)a0 forceRemoveAll:(BOOL)a1;
- (void)_removeCommittedTextInsertionStrokes:(id)a0 committedTextLength:(long long)a1 completion:(id /* block */)a2;
- (void)_applyTextReplacementWithCompletion:(id /* block */)a0;
- (void)_removeStrokesForSliceIDs:(id)a0 destinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_applySelectOrDeleteGestureOfType:(long long)a0 completion:(id /* block */)a1;
- (long long)_characterLevelOperationLocationForCorrection:(id)a0 committedTextLength:(long long)a1 uncommittedPendingText:(id)a2;
- (id)_activePreviewTextForUncommittedText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_showSystemCalloutIfNeededWithReferenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithQueryItem:(id)a0 handwritingShot:(id)a1 immediateCommitType:(long long)a2 applyAfterDelay:(double)a3;
- (void)beginApplyingResultCommandWithInputTargetState:(id)a0;
- (void)cancelDelayedCommand;
- (void)_logResultWithNewInputTargetState:(id)a0 cancelCommit:(BOOL)a1;

@end
