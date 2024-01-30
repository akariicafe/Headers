@class NSString;

@interface PodcastsFoundation.ServerChannel : NSObject <MTFeedChannel, PodcastsFoundation.MediaObject> {
    void /* unknown type, empty encoding */ href;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ relationships;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *subscriptionName;
@property (nonatomic, readonly) long long showCount;
@property (nonatomic, readonly) long long availableShowCount;
@property (nonatomic, readonly) NSString *storeId;
@property (nonatomic, readonly) NSString *displayType;
@property (nonatomic, readonly) NSString *artworkURL;
@property (nonatomic, readonly) NSString *logoImageURL;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, readonly) float logoImageHeight;
@property (nonatomic, readonly) float logoImageWidth;
@property (nonatomic, readonly) NSString *uberBackgroundImageURL;
@property (nonatomic, readonly) NSString *uberBackgroundJoeColor;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;

@end
