@class FCFeedViewportBookmark, FCFeedViewport, FCCloudContext, FCFeedDescriptor, FCFeedViewportDiff;
@protocol FCCoreConfiguration;

@interface FCFeedViewportUpdateHeadlinesOperation : FCOperation

@property (retain, nonatomic) FCFeedViewport *resultViewport;
@property (retain, nonatomic) FCFeedViewportDiff *resultDiff;
@property (retain, nonatomic) FCFeedViewportBookmark *adjustedFromBookmark;
@property (retain, nonatomic) FCFeedViewportBookmark *adjustedToBookmark;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (nonatomic) double maxArticleAge;
@property (copy, nonatomic) FCFeedViewportBookmark *fromBookmark;
@property (copy, nonatomic) FCFeedViewportBookmark *toBookmark;
@property (copy, nonatomic) id /* block */ updateHeadlinesCompletionHandler;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
