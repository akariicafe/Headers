@class NSError, NSMutableDictionary;
@protocol CUIKCommitDelegate, CUIKDecisionDelegate;

@interface CUIKUndoManager : NSUndoManager

@property (retain, nonatomic) NSMutableDictionary *undeletedObjectMap;
@property (retain, nonatomic) NSMutableDictionary *specificIdentifierMap;
@property (retain) id<CUIKCommitDelegate> commitDelegate;
@property (retain) id<CUIKDecisionDelegate> decisionDelegate;
@property (copy, nonatomic) id /* block */ editingManagerProvider;
@property (retain) NSError *lastError;

- (void).cxx_destruct;

@end
