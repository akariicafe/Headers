@class NSString, NSNumber, ContentImage;

@interface LiveService : INObject

@property (copy, nonatomic) NSString *liveServiceId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *playPunchoutUrl;
@property (copy, nonatomic) NSNumber *isSubscribed;
@property (copy, nonatomic) NSNumber *isInstalled;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *appAdamId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appStoreUrl;
@property (copy, nonatomic) ContentImage *appImage;

@end
