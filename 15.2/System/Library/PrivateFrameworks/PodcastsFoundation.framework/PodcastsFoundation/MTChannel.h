@class NSString, NSSet;

@interface MTChannel : NSManagedObject

@property (nonatomic) long long storeId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *podcastUuids;
@property (retain, nonatomic) NSSet *podcasts;
@property (retain, nonatomic) NSString *displayType;
@property (nonatomic) long long totalShowCount;
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

+ (id)predicateForChannelWithStoreId:(long long)a0;
+ (id)createOrFindChannelFromFeedChannelItem:(id)a0 personalizedRequest:(BOOL)a1 context:(id)a2;

@end
