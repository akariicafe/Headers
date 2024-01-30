@class FCFeedGroupEmittingContext, NSString, NSArray, FCFeedGroupEmittingCursor, FCFeedGroup;

@interface FCFeedGroupEmittingOperation : FCOperation

@property (copy, nonatomic) id /* block */ groupEmittingCompletionHandler;
@property (readonly, nonatomic) FCFeedGroupEmittingContext *context;
@property (readonly, nonatomic) FCFeedGroupEmittingCursor *fromCursor;
@property (readonly, nonatomic) FCFeedGroupEmittingCursor *toCursor;
@property (readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
@property (retain, nonatomic) FCFeedGroup *resultGroup;
@property (retain, nonatomic) NSArray *resultGroups;
@property (retain, nonatomic) FCFeedGroupEmittingCursor *resultCursor;
@property (nonatomic) BOOL resultFinished;

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2 groupEmitterIdentifier:(id)a3;

@end
