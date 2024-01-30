@interface SLService : NSObject

+ (id)allServices;
+ (id)serviceForServiceType:(id)a0;

- (BOOL)hasAccounts;
- (id)accountType;
- (id)activityTitle;
- (id)activityImage;
- (id)composeViewController;
- (id)serviceType;
- (void)addExtraParameters:(id)a0 forRequest:(id)a1;
- (BOOL)isFirstClassService;
- (long long)maximumURLCount;
- (long long)maximumImageCount;
- (long long)maximumImageDataSize;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;
- (BOOL)supportsImageURL:(id)a0;
- (BOOL)supportsVideoURL:(id)a0;

@end
