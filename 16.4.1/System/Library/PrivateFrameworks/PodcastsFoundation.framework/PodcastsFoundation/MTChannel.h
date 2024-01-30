@class NSString, NSSet;

@interface MTChannel : NSManagedObject

@property (nonatomic) long long storeId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *subscriptionName;
@property (retain, nonatomic) NSSet *podcastUuids;
@property (retain, nonatomic) NSSet *podcasts;
@property (retain, nonatomic) NSString *displayType;
@property (nonatomic) long long showCount;
@property (nonatomic) long long availableShowCount;
@property (readonly, nonatomic) long long followedShowCount;
@property (nonatomic) BOOL subscriptionActive;
@property (nonatomic) double lastPersonalizedRequestDate;
@property (nonatomic) double subscriptionEnabledDate;
@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSString *logoImageURL;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) float logoImageHeight;
@property (nonatomic) float logoImageWidth;
@property (retain, nonatomic) NSString *uberBackgroundImageURL;
@property (retain, nonatomic) NSString *uberBackgroundJoeColor;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) long long resolvedShowCount;
@property (readonly, nonatomic) BOOL isMultiShow;
@property (readonly, nonatomic) BOOL isSingleShow;

+ (id)predicateForChannelWithStoreId:(long long)a0;
+ (id)createOrFindChannelFromFeedChannelItem:(id)a0 personalizedRequest:(BOOL)a1 context:(id)a2;
+ (id)predicateForChannelStoreIds:(id)a0;
+ (id)predicateForFollowedChannel;
+ (id)predicateForLibraryChannel;
+ (id)predicateForMultiShowChannel;
+ (id)predicateForSingleShowChannel;
+ (id)predicateForSubscribedChannel;
+ (id)sortDescriptorsForLibraryChannelsPage;

@end
