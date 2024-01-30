@class NSString;

@interface IMPodcastFeedChannelItem : NSObject <MTFeedChannel>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *subscriptionName;
@property (nonatomic) long long showCount;
@property (nonatomic) long long availableShowCount;
@property (retain, nonatomic) NSString *storeId;
@property (retain, nonatomic) NSString *displayType;
@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSString *logoImageURL;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) float logoImageHeight;
@property (nonatomic) float logoImageWidth;
@property (retain, nonatomic) NSString *uberBackgroundImageURL;
@property (retain, nonatomic) NSString *uberBackgroundJoeColor;
@property (retain, nonatomic) NSString *url;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
