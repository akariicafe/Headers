@class FCCloudContext, FCDeflatedFeedGroup, FCFeedDescriptor, FCFeedGroup;
@protocol FCCoreConfiguration;

@interface FCInflateFeedGroupOperation : FCOperation

@property (retain, nonatomic) FCFeedGroup *inflatedGroup;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (retain, nonatomic) FCDeflatedFeedGroup *deflatedGroup;
@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ inflationCompletionHandler;

- (void).cxx_destruct;
- (void)_fetchHeadlinesWithCompletionHandler:(id /* block */)a0;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)_fetchTagsForPBGroup:(id)a0 sharedStrings:(id)a1 completionHandler:(id /* block */)a2;
- (void)_fetchHeadlinesWithDeflatedHeadlines:(id)a0 completionHandler:(id /* block */)a1;

@end
