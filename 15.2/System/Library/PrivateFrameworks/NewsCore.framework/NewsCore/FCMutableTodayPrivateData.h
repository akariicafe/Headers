@class FCBundleSubscription, NSString, NSMutableDictionary, NSSet, NSArray, NSDictionary, NSNumber;
@protocol FCDerivedPersonalizationData, NSCoding;

@interface FCMutableTodayPrivateData : FCTodayPrivateData <FCMutableTodayPrivateData>

@property (readonly, nonatomic) NSMutableDictionary *dictionary;
@property (copy, nonatomic) id<FCDerivedPersonalizationData, NSCoding> derivedPersonalizationData;
@property (copy, nonatomic) NSString *localNewsTagID;
@property (copy, nonatomic) NSSet *mutedTagIDs;
@property (copy, nonatomic) NSArray *autoFavoriteTagIDs;
@property (copy, nonatomic) NSSet *purchasedTagIDs;
@property (copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property (copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property (copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property (copy, nonatomic) NSNumber *onboardingVersion;
@property (copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)_deleteObjectsForOldKeys;

@end
