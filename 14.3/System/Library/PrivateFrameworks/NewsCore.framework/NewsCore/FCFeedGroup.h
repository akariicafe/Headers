@class NSDate, NSString, NSArray, FCHeadlineClusteringRules, FCFeedDescriptor, FCFeedEdition, FCColor;
@protocol FCCardStyleProviding, FCForYouBridgedFeedGroup;

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long groupType;
@property (readonly, copy, nonatomic) NSArray *elements;
@property (readonly, copy, nonatomic) NSArray *headlines;
@property (readonly, copy, nonatomic) NSArray *debugHeadlines;
@property (readonly, copy, nonatomic) FCHeadlineClusteringRules *clusteringRules;
@property (readonly, copy, nonatomic) NSString *eyebrowText;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *ctaText;
@property (readonly, copy, nonatomic) FCColor *titleColor;
@property (readonly, copy, nonatomic) FCColor *darkStyleTitleColor;
@property (readonly, copy, nonatomic) id<FCCardStyleProviding> cardStyle;
@property (readonly, copy, nonatomic) id<FCCardStyleProviding> darkCardStyle;
@property (readonly, copy, nonatomic) FCFeedDescriptor *L2FeedDescriptor;
@property (readonly, copy, nonatomic) FCFeedEdition *edition;
@property (readonly, nonatomic) BOOL isFirstFromEdition;
@property (readonly, nonatomic) BOOL canBeExtended;
@property (readonly, nonatomic) BOOL hasStrictHeadlineOrder;
@property (readonly, nonatomic, getter=isTopStories) BOOL topStories;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) BOOL usesPlaceholderHeadlines;
@property (readonly, nonatomic) long long feedElementType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long mergeID;
@property (readonly, copy, nonatomic) NSString *backingTagID;
@property (readonly, copy, nonatomic) NSArray *issueIDs;
@property (readonly, nonatomic) id<FCForYouBridgedFeedGroup> bridgedGroup;

+ (id)pbGroupFromGroup:(id)a0 sharedStringIndex:(id)a1;
+ (id)_pbHeadlinesFromHeadlines:(id)a0 sharedStringIndex:(id)a1;

- (id)initWithIdentifier:(id)a0 groupType:(long long)a1 sourceIdentifier:(id)a2 creationDate:(id)a3 title:(id)a4 subtitle:(id)a5 eyebrowText:(id)a6 ctaText:(id)a7 titleColor:(id)a8 darkStyleTitleColor:(id)a9 cardStyle:(id)a10 darkCardStyle:(id)a11 L2FeedDescriptor:(id)a12 backingTagID:(id)a13 edition:(id)a14 isFirstFromEdition:(BOOL)a15 elements:(id)a16 debugHeadlines:(id)a17 clusteringRules:(id)a18 issueIDs:(id)a19 bridgedGroup:(id)a20 options:(unsigned long long)a21 mergeID:(unsigned long long)a22;
- (id)initWithIdentifier:(id)a0 groupType:(long long)a1 sourceIdentifier:(id)a2 title:(id)a3 subtitle:(id)a4 titleColor:(id)a5 darkStyleTitleColor:(id)a6 L2FeedDescriptor:(id)a7 elements:(id)a8 debugHeadlines:(id)a9 clusteringRules:(id)a10 options:(unsigned long long)a11;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isGap;
- (id)initWithGroupType:(long long)a0 sourceIdentifier:(id)a1 title:(id)a2 L2FeedDescriptor:(id)a3 issueIDs:(id)a4;
- (BOOL)isEqual:(id)a0;
- (id)copyWithElements:(id)a0;
- (id)equivalentTopicIDs;
- (id)initWithGroupType:(long long)a0 sourceIdentifier:(id)a1 title:(id)a2 subtitle:(id)a3 eyebrowText:(id)a4 ctaText:(id)a5 cardStyle:(id)a6 darkCardStyle:(id)a7 elements:(id)a8 debugHeadlines:(id)a9 options:(unsigned long long)a10;
- (id)copyWithOptions:(unsigned long long)a0;
- (id)copyWithMergeID:(unsigned long long)a0;
- (id)copyWithEdition:(id)a0 isFirst:(BOOL)a1;
- (id)initWithGroupType:(long long)a0 sourceIdentifier:(id)a1 title:(id)a2 subtitle:(id)a3 titleColor:(id)a4 darkStyleTitleColor:(id)a5 L2FeedDescriptor:(id)a6 elements:(id)a7 debugHeadlines:(id)a8 clusteringRules:(id)a9 options:(unsigned long long)a10;
- (BOOL)containsHeadlineIdenticalTo:(id)a0;
- (id)initWithGroupType:(long long)a0 sourceIdentifier:(id)a1 elements:(id)a2 debugHeadlines:(id)a3 options:(unsigned long long)a4;
- (id)initWithIdentifier:(id)a0 groupType:(long long)a1 sourceIdentifier:(id)a2 L2FeedDescriptor:(id)a3 bridgedGroup:(id)a4;

@end
