@class FCFeedViewportBookmark, FCFeedViewport, FCCloudContext, FCFeedDescriptor, FCFeedViewportDiff;
@protocol FCFeedElement, FCCoreConfiguration;

@interface FCFeedViewportExpandGapOperation : FCOperation

@property (retain, nonatomic) FCFeedViewport *sanitizedViewport;
@property (retain, nonatomic) FCFeedViewport *resultViewport;
@property (retain, nonatomic) FCFeedViewportDiff *resultDiff;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) id<FCFeedElement> gapElement;
@property (nonatomic) unsigned long long desiredHeadlineCount;
@property (copy, nonatomic) FCFeedViewportBookmark *bookmark;
@property (nonatomic) unsigned long long gapExpansionDirection;
@property (nonatomic) long long gapExpansionPolicy;
@property BOOL lightweightOnly;
@property (nonatomic) BOOL cachedOnly;
@property BOOL offlineMode;
@property (copy, nonatomic) id /* block */ expandGapCompletionHandler;

+ (id)_sanitizeViewport:(id)a0 context:(id)a1 feedDescriptor:(id)a2 configuration:(id)a3;

- (void)prepareOperation;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchAssetsForInsertedGroup:(id)a0 cachedOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
