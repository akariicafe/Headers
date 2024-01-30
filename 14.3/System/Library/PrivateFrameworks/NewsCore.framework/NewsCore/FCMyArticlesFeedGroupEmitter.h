@class NSString, NSSet;
@protocol FCHeadlineClusterOrdering, FCHeadlineClustering;

@interface FCMyArticlesFeedGroupEmitter : NSObject <FCFeedGroupEmitting>

@property (class, readonly, copy, nonatomic) NSString *groupEmitterIdentifier;

@property (retain, nonatomic) id<FCHeadlineClustering> headlineClusterer;
@property (retain, nonatomic) id<FCHeadlineClusterOrdering> headlineClusterOrderer;
@property (readonly, copy, nonatomic) NSSet *emittableGroupTypes;
@property (readonly, nonatomic) BOOL shouldEmitContentInFavoritesOnlyMode;
@property (readonly, nonatomic) BOOL emitsSingletonGroups;
@property (readonly, nonatomic) BOOL emitsSingleRefreshSessionGroups;
@property (readonly, nonatomic) long long requiredForYouContentTypes;
@property (readonly, nonatomic) BOOL requiresHeavyweightContent;
@property (readonly, nonatomic) BOOL isRequiredByFollowingEmitters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHeadlineClusterer:(id)a0 headlineClusterOrderer:(id)a1;
- (void).cxx_destruct;
- (BOOL)wantsToInsertGroupInContext:(id)a0;
- (BOOL)wantsToEmitGroupInContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2;
- (BOOL)canMergeHeadlinesFromGroup:(id)a0 intoGroup:(id)a1;
- (BOOL)supportsPagination;
- (id)operationToEmitGroupWithContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2;

@end
