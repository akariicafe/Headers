@class NSSet, NSDictionary, NSArray, FCBundleSubscription, NSNumber, NSString;
@protocol FCDerivedPersonalizationData, NSCoding;

@interface FCTodayPrivateData : NSObject <FCTodayPrivateData>

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) id<FCDerivedPersonalizationData, NSCoding> derivedPersonalizationData;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property (readonly, copy, nonatomic) NSArray *autoFavoriteTagIDs;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly, copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property (readonly, copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property (readonly, copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property (readonly, copy, nonatomic) NSNumber *onboardingVersion;
@property (readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (id)initWithDictionary:(id)a0;

@end
