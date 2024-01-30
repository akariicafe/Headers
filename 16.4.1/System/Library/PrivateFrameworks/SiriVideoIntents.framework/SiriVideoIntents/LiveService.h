@class NSString, NSNumber, ContentImage;

@interface LiveService : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *liveServiceId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *playPunchoutUrl;
@property (nonatomic, retain) NSNumber *isSubscribed;
@property (nonatomic, retain) NSNumber *isInstalled;
@property (nonatomic, copy) NSString *channelId;
@property (nonatomic, copy) NSString *channelName;
@property (nonatomic, copy) NSString *appAdamId;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *appStoreUrl;
@property (nonatomic, retain) ContentImage *appImage;
@property (nonatomic, retain) NSNumber *isRemoteResult;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
