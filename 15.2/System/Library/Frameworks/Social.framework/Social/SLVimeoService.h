@interface SLVimeoService : SLService

- (id)serviceType;
- (id)accountTypeIdentifier;
- (id)activityImage;
- (id)activityTitle;
- (long long)authenticationStyle;
- (BOOL)isFirstClassService;
- (long long)maximumURLCount;
- (long long)maximumImageCount;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;

@end
