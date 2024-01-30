@class NSSet;
@protocol FCHeadlineClusterOrdering, FCHeadlineClustering;

@interface FCMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (retain, nonatomic) id<FCHeadlineClustering> headlineClusterer;
@property (retain, nonatomic) id<FCHeadlineClusterOrdering> headlineClusterOrderer;
@property (retain, nonatomic) NSSet *emittableGroupTypes;

- (void).cxx_destruct;
- (void)performOperation;
- (void)_performOperation;
- (id)_nonEditorialFeedTransformationWithFeedContext:(id)a0 showStoriesOnlyFromFavorites:(BOOL)a1;
- (id)_joinedFeedTransformation;
- (id)interleaveHeadlines:(id)a0 withPublisherDiversificationPenalty:(double)a1;
- (id)_sortClusteredHeadlinesForDisplay:(id)a0 withAdditionalData:(id)a1 scoresByArticleID:(id)a2 topicsByID:(id)a3 translationProvider:(id)a4;

@end
