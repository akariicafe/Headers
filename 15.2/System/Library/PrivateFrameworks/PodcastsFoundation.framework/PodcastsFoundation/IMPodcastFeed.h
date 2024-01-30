@class NSString, NSArray, IMPodcastFeedChannelItem, NSMutableArray;

@interface IMPodcastFeed : NSObject

@property (nonatomic) BOOL preferredCategoryFound;
@property (retain, nonatomic) NSString *feedDescription;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSString *globalImageURL;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *provider;
@property (retain, nonatomic) NSString *updatedFeedURL;
@property (retain, nonatomic) NSString *resolvedFeedURL;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL isNotSubscribable;
@property (retain, nonatomic) NSString *shareURL;
@property (retain, nonatomic) NSString *showType;
@property (retain, nonatomic) NSString *webpageURL;
@property (retain, nonatomic) NSString *podcastStoreId;
@property (retain, nonatomic) NSString *displayType;
@property (retain, nonatomic) NSArray *offers;
@property (retain, nonatomic) NSString *uberBackgroundImageURL;
@property (retain, nonatomic) NSString *uberBackgroundJoeColor;
@property (retain, nonatomic) NSString *artworkPrimaryColor;
@property (retain, nonatomic) IMPodcastFeedChannelItem *channelItem;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)offerTypesAsFlagBits;

@end
