@class NSString;

@interface IMPodcastFeedChannelItem : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long showCount;
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

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
