@class NSString, NTPBFeedItem, SFSearchResult, NSDate;
@protocol FCFeedTransformationItem;

@interface NTFeedTransformationFeedItem : NSObject <NTFeedTransformationItem>

@property (readonly, copy, nonatomic) NTPBFeedItem *feedItem;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long todayItemType;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property (readonly, copy, nonatomic) NSDate *cacheExpirationDate;
@property (readonly, copy, nonatomic) SFSearchResult *searchResult;
@property (readonly, nonatomic) BOOL usesDynamicSlotAllocation;
@property (readonly, nonatomic) id<FCFeedTransformationItem> feedTransformationItem;
@property (readonly, nonatomic) BOOL needsFeedItemHeadlinesFetch;
@property (readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property (readonly, nonatomic) unsigned long long preferredDynamicSlotAllocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)protoitemWithFetchedFeedItemHeadline:(id)a0;
- (id)initWithFeedItem:(id)a0 cacheExpirationDate:(id)a1;

@end
