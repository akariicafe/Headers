@class NSError, FCFeedViewportGap, NSArray, NSMutableDictionary, NSDictionary, FCDateRange, FCFeedViewport, FCFeedDescriptor, FCCloudContext, FCFeedGroup;
@protocol FCCoreConfiguration;

@interface FCFeedViewportExpandGroupGapOperation : FCOperation

@property (retain, nonatomic) NSArray *feedGroupEmitters;
@property (retain, nonatomic) FCDateRange *refreshDateRange;
@property (retain, nonatomic) NSDictionary *toCursorsByEmitterID;
@property (retain, nonatomic) NSMutableDictionary *forYouCatchUpOperationsByEdition;
@property (retain, nonatomic) NSArray *resultInternalElements;
@property (retain, nonatomic) FCFeedGroup *resultInsertedGroup;
@property (retain, nonatomic) NSError *resultError;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) FCFeedViewportGap *gap;
@property (nonatomic) unsigned long long desiredHeadlineCount;
@property (nonatomic) long long gapExpansionPolicy;
@property BOOL lightweightOnly;
@property (copy, nonatomic) id /* block */ expandGapCompletionHandler;

- (void)prepareOperation;
- (void).cxx_destruct;
- (id)_associatedForYouCatchUpOperationForEdition:(id)a0;
- (BOOL)validateOperation;
- (id)_groupsFromRefreshSessionContainingGap:(id)a0 internalElements:(id)a1;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
