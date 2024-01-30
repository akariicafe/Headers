@class NSString;

@interface FCDraftIssuesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (readonly, nonatomic) NSString *issueListID;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (id)initWithContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2 groupEmitterIdentifier:(id)a3 issueListID:(id)a4;

@end
