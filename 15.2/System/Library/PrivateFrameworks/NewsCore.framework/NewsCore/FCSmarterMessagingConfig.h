@class NSArray, NSDictionary;

@interface FCSmarterMessagingConfig : NSObject

@property (readonly, nonatomic) long long lowChurnPropensitySegmentSetId;
@property (readonly, nonatomic) long long mediumChurnPropensitySegmentSetId;
@property (readonly, nonatomic) long long highChurnPropensitySegmentSetId;
@property (readonly, copy, nonatomic) NSArray *segmentSetIdsAllowlist;
@property (readonly, copy, nonatomic) NSArray *placementsBlocklist;
@property (readonly, nonatomic) BOOL todayFeedMastheadBannerEnabledForSubscribers;
@property (readonly, copy, nonatomic) NSDictionary *engagementUpsellConfig;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
