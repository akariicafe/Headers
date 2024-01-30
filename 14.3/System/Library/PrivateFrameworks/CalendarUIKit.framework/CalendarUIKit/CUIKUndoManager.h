@class NSError;
@protocol CUIKCommitDelegate, CUIKDecisionDelegate;

@interface CUIKUndoManager : NSUndoManager

@property (retain) id<CUIKCommitDelegate> commitDelegate;
@property (retain) id<CUIKDecisionDelegate> decisionDelegate;
@property (copy, nonatomic) id /* block */ editingManagerProvider;
@property (retain) NSError *lastError;

- (void).cxx_destruct;

@end
