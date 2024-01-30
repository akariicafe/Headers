@class NSString, NSArray;
@protocol MTFeedChannel;

@interface MTServerPodcast : PodcastsFoundation.ServerPodcastBase <MTFeedPodcast, PodcastsFoundation.MediaObject> {
    void /* unknown type, empty encoding */ episodes;
}

@property (nonatomic, readonly) NSString *feedDescription;
@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *imageURL;
@property (nonatomic, readonly) NSString *globalImageURL;
@property (nonatomic, readonly) BOOL hasEpisodes;
@property (nonatomic, readonly) NSString *provider;
@property (nonatomic, readonly) NSString *updatedFeedURL;
@property (nonatomic, readonly) NSString *resolvedFeedURL;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) BOOL isExplicit;
@property (nonatomic, readonly) BOOL isNotSubscribable;
@property (nonatomic, readonly) NSString *shareURL;
@property (nonatomic, readonly) NSString *showType;
@property (nonatomic, readonly) NSString *webpageURL;
@property (nonatomic, readonly) NSString *podcastStoreId;
@property (nonatomic, readonly) NSString *displayType;
@property (nonatomic, readonly) NSArray *offers;
@property (nonatomic, readonly) NSString *uberBackgroundImageURL;
@property (nonatomic, readonly) NSString *uberBackgroundJoeColor;
@property (nonatomic, readonly) NSString *artworkPrimaryColor;
@property (nonatomic, readonly) id<MTFeedChannel> channelItem;
@property (nonatomic, readonly) NSString *showSpecificUpsellCopy;

- (void).cxx_destruct;
- (id)toFeed;

@end
