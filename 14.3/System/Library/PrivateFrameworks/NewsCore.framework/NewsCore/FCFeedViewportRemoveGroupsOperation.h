@class FCFeedViewport, FCFeedViewportDiff, FCFeedDescriptor;

@interface FCFeedViewportRemoveGroupsOperation : FCOperation

@property (retain, nonatomic) FCFeedViewport *resultViewport;
@property (retain, nonatomic) FCFeedViewportDiff *viewportDiff;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (copy, nonatomic) id /* block */ groupRemovalTestBlock;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) id /* block */ removeGroupsCompletionHandler;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationDidFinishWithError:(id)a0;

@end
