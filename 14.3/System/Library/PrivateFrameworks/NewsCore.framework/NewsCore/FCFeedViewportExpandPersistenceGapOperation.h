@class FCFeedViewportBookmark, FCCloudContext, FCFeedViewport, FCDeflatedFeedGroup, FCFeedDescriptor, FCFeedViewportPersistenceGap, FCFeedGroup;
@protocol FCCoreConfiguration;

@interface FCFeedViewportExpandPersistenceGapOperation : FCOperation

@property (nonatomic) unsigned long long indexOfGroupToInflate;
@property (retain, nonatomic) FCDeflatedFeedGroup *groupToInflate;
@property (retain, nonatomic) FCFeedGroup *inflatedGroup;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (copy, nonatomic) FCFeedViewportPersistenceGap *gap;
@property (copy, nonatomic) FCFeedViewportBookmark *bookmark;
@property (nonatomic) unsigned long long gapExpansionDirection;
@property (nonatomic) long long gapExpansionPolicy;
@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ expandGapCompletionHandler;

- (void)prepareOperation;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
