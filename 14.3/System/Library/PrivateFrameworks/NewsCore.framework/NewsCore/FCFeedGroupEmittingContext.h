@class NSHashTable, NSDate, NSArray, NSSet, FCFeedEdition, FCDateRange, FCFeedRefreshSession, FCForYouCatchUpOperation, FCFeedDescriptor, FCCloudContext;
@protocol FCFeedPersonalizing, FCCoreConfiguration;

@interface FCFeedGroupEmittingContext : NSObject

@property (retain, nonatomic) FCFeedRefreshSession *refreshSession;
@property (retain, nonatomic) NSHashTable *groupsFromPage;
@property (retain, nonatomic) NSHashTable *insertedGroupsFromPage;
@property (retain, nonatomic) FCFeedEdition *followingEdition;
@property (retain, nonatomic) NSArray *emitters;
@property (retain, nonatomic) NSArray *remainingEmitters;
@property (readonly, copy, nonatomic) NSSet *articleIDs;
@property (readonly, copy, nonatomic) NSSet *clusterIDs;
@property (readonly, copy, nonatomic) NSSet *groupIDs;
@property (readonly, copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (readonly, nonatomic) FCCloudContext *cloudContext;
@property (readonly, nonatomic) id<FCFeedPersonalizing> personalizer;
@property (readonly, nonatomic) FCDateRange *refreshDateRange;
@property (readonly, copy, nonatomic) FCDateRange *pageDateRange;
@property (readonly, nonatomic) BOOL isTopOfPage;
@property (readonly, nonatomic) BOOL isFirstPageInRefreshSession;
@property (readonly, copy, nonatomic) FCFeedEdition *edition;
@property (readonly, nonatomic) NSDate *editionKeyDate;
@property (readonly, copy, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (readonly, nonatomic) unsigned long long desiredHeadlineCount;
@property (readonly, nonatomic) BOOL preferSpeedOverQuality;
@property (readonly, copy, nonatomic) NSArray *precedingGroups;
@property (readonly, copy, nonatomic) NSArray *pendingGroups;
@property (readonly, copy, nonatomic) NSArray *followingGroups;
@property (readonly, copy, nonatomic) NSArray *pendingGroupsFromOtherSessions;
@property (readonly, nonatomic) long long precedingGroupType;
@property (readonly, nonatomic) BOOL isOffline;
@property (readonly, nonatomic) FCForYouCatchUpOperation *forYouCatchUpOperation;

- (id)allArticleIDs;
- (id)precedingNewFavoriteTagIDs;
- (id)groupOfGroupType:(long long)a0;
- (id)initWithConfiguration:(id)a0 cloudContext:(id)a1 refreshSession:(id)a2 refreshDateRange:(id)a3 currentEdition:(id)a4 followingEdition:(id)a5 precedingGroups:(id)a6 followingGroups:(id)a7 pendingGroupsFromOtherSessions:(id)a8 feedDescriptor:(id)a9 emitters:(id)a10 desiredHeadlineCount:(unsigned long long)a11 preferSpeedOverQuality:(BOOL)a12 forYouCatchUpOperation:(id)a13;
- (id)articleIDsContainedByGroupsWithSourceIdentifier:(id)a0;
- (BOOL)isNewEdition;
- (id)filterTransformationWithFilterOptions:(long long)a0 considerOutputFrom:(id)a1;
- (id)groupFromPageWithSourceIdentifier:(id)a0;
- (id)copyWithRefreshSession:(id)a0;
- (void).cxx_destruct;
- (id)precedingAdjacentHeadlinesFromGroupType:(long long)a0;
- (unsigned long long)countOfGroupsFromPageWithType:(long long)a0;
- (id)creationDateOfFollowingGroupWithType:(long long)a0;
- (BOOL)pageWillHaveGroupWithSourceIdentifier:(id)a0;
- (id)filterTransformationWithFilterOptions:(long long)a0 additionalArticleIDs:(id)a1;
- (BOOL)pageHasPrecedingGroupWithSourceIdentifier:(id)a0;
- (id)filterTransformationWithFilterOptions:(long long)a0;
- (id)followingAdjacentHeadlinesFromGroupType:(long long)a0;
- (BOOL)pageHasExhaustedGroupsWithTypes:(id)a0;
- (unsigned long long)countOfPrecedingAdjacentGroupsWithTypes:(id)a0;
- (id)filterTransformationWithFilterOptions:(long long)a0 ignoringOutputFrom:(id)a1;
- (id)precedingAndPendingTopicIDsInSession;
- (id)creationDateOfGroupWithSourceIdentifier:(id)a0;
- (id)_filterTransformationWithFilterOptions:(long long)a0 groupTypes:(id)a1 includeArticlesFromGroupTypes:(BOOL)a2;
- (BOOL)pageWillContainNewGroupWithSourceIdentifier:(id)a0;
- (id)allGroupIDs;
- (id)filterTransformationWithFilterOptions:(long long)a0 ignoringCurrentPageOutputFrom:(id)a1;
- (BOOL)pageIsWaitingForFirstGroupFromSourceIdentifier:(id)a0;

@end
