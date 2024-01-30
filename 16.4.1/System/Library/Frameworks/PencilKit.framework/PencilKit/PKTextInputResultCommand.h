@class PKTextInputElementContent, PKTextInputHandwritingShot, NSString, CHTextInputQueryItem, PKTextInputTargetState;
@protocol PKTextInputResultCommandDelegate;

@interface PKTextInputResultCommand : NSObject {
    BOOL _resultedInTargetChange;
    BOOL _hasPendingUncommittedChanges;
    BOOL _destinationFrameForAnimationMightMove;
    BOOL __applyIntermediateChange;
    id<PKTextInputResultCommandDelegate> _delegate;
    long long _commandState;
    CHTextInputQueryItem *_queryItem;
    PKTextInputHandwritingShot *_handwritingShot;
    PKTextInputElementContent *_targetElementContent;
    PKTextInputTargetState *_initialInputTargetState;
    long long _immediateCommitType;
    PKTextInputTargetState *_finalInputTargetState;
    NSString *_committedText;
    long long _committedTokenColumnCount;
    NSString *_commitReason;
    PKTextInputTargetState *__inProgressInputTargetState;
    struct _NSRange { unsigned long long location; unsigned long long length; } _affectedRange;
}

- (id)description;
- (void).cxx_destruct;

@end
