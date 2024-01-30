@class NSArray, FCFeedGroupEmittingContext, NSDictionary, FCFeedRefreshSession;

@interface FCFeedViewportGetPendingGroupsOperation : FCOperation

@property (retain, nonatomic) FCFeedRefreshSession *resultRefreshSession;
@property (retain, nonatomic) FCFeedRefreshSession *refreshSession;
@property (retain, nonatomic) NSArray *feedGroupEmitters;
@property (retain, nonatomic) FCFeedGroupEmittingContext *groupEmittingContext;
@property (retain, nonatomic) NSDictionary *toCursorsByEmitterID;
@property BOOL lightweightOnly;
@property (copy, nonatomic) id /* block */ emitGroupsCompletionHandler;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (id)_exhaustGroupEmitter:(id)a0 inRefreshSession:(id)a1;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)_isErrorTransient:(id)a0;
- (id)_advanceRefreshSessionToNextInterestedEmitter:(id)a0;

@end
