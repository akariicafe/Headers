@interface SLVimeoService : SLService

- (id)activityTitle;
- (id)activityImage;
- (id)accountTypeIdentifier;
- (id)serviceType;
- (long long)authenticationStyle;
- (BOOL)isFirstClassService;
- (long long)maximumURLCount;
- (long long)maximumImageCount;
- (long long)maximumVideoCount;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoTimeLimit;

@end
