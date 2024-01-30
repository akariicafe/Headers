@class NSArray, NSError;

@interface VUIMediaEntityFetchResponseChangesOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSArray *fetchResponseChanges;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSArray *latestFetchResponses;
@property (copy, nonatomic) NSArray *currentFetchResponses;

+ (id)_changeSetFromCurrentMediaEntities:(id)a0 toLatestMediaEntities:(id)a1;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;
- (id)initWithLatestFetchResponses:(id)a0 currentFetchResponses:(id)a1;
- (void)_preloadMediaEntityMetadata;
- (id)_mediaEntitiesChangeSetWithLatestFetchResponse:(id)a0 currentFetchResponse:(id)a1;
- (id)_groupingChangeSetWithLatestFetchResponse:(id)a0 currentFetchResponse:(id)a1;
- (void)_preloadMetadataForFetchResponse:(id)a0;
- (id)_groupingChangeSetWithCurrentGrouping:(id)a0 latestGrouping:(id)a1;

@end
