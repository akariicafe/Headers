@class FCCloudContext, NSString, NSArray, FCEdgeCacheHint;
@protocol FCChannelProviding;

@interface FCChannelSectionHeadlinesFetchOperation : FCOperation

@property (readonly, nonatomic) FCCloudContext *cloudContext;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) unsigned long long maxHeadlinesCount;
@property (readonly, nonatomic) unsigned long long maxHeadlinesPerFeed;
@property (readonly, nonatomic) double fetchWindow;
@property (readonly, nonatomic) double sectionsCacheTimeToLive;
@property (readonly, nonatomic) id<FCChannelProviding> channel;
@property (copy, nonatomic) NSArray *sectionHeadlinesGroups;
@property (readonly, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (copy) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)_configurationPromise;
- (id)_channelAndSectionTagsPromiseWithChannelID:(id)a0;
- (id)_channelPromiseWithTagsByID:(id)a0 parentChannelID:(id)a1;
- (id)_sectionsPromiseWithTagsByID:(id)a0 sectionIDs:(id)a1;
- (id)_feedItemsPromiseWithChannel:(id)a0 sectionsByID:(id)a1 configuration:(id)a2;
- (id)_headlinesPromiseWithFeedItems:(id)a0 sectionsByID:(id)a1 configuration:(id)a2;
- (id)_createFeedRequestWithFeedID:(id)a0 feedRange:(id)a1;
- (id)_feedItemsTransformationWithConfiguration:(id)a0;
- (id)_headlinesAssembledBySectionFromFeedItemMap:(id)a0 sectionIDsByFeedID:(id)a1 sectionsByID:(id)a2;
- (id)initWithCloudContext:(id)a0 channelID:(id)a1 maxHeadlinesCount:(unsigned long long)a2 maxHeadlinesPerFeed:(unsigned long long)a3 fetchWindow:(double)a4 sectionsCacheTimeToLive:(double)a5 edgeCacheHint:(id)a6;
- (void).cxx_destruct;
- (id)init;

@end
