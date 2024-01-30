@class NSDictionary;

@interface SHFeatureFlags : NSObject

@property (readonly, nonatomic) NSDictionary *featureFlags;
@property (readonly, nonatomic) BOOL isAppClipEnabled;
@property (readonly, nonatomic) BOOL isTrackPageEnabled;
@property (readonly, nonatomic) BOOL appClipAppendsSubscriptionStatus;
@property (readonly, nonatomic) BOOL trackPageDisplaysShazamUpsell;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
