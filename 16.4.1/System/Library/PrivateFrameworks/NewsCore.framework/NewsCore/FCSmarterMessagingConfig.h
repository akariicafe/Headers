@class NSArray, NSDictionary;

@interface FCSmarterMessagingConfig : NSObject

@property (readonly, nonatomic) long long lowChurnPropensitySegmentSetId;
@property (readonly, nonatomic) long long mediumChurnPropensitySegmentSetId;
@property (readonly, nonatomic) long long highChurnPropensitySegmentSetId;
@property (readonly, copy, nonatomic) NSArray *segmentSetIdsAllowlist;
@property (readonly, copy, nonatomic) NSArray *placementsBlocklist;
@property (readonly, nonatomic) BOOL todayFeedMastheadBannerEnabledForSubscribers;
@property (readonly, copy, nonatomic) NSDictionary *engagementUpsellConfig;
@property (readonly, nonatomic) long long maxEnableNotificationBubbleTipPresentations;
@property (readonly, nonatomic) long long notificationBubbleTipPresentationsQuiescenceInterval;
@property (readonly, nonatomic) long long maxSportsOnboardingBubbleTipPresentations;
@property (readonly, nonatomic) long long sportsBubbleTipPresentationsQuiescenceInterval;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
