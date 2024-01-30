@class VCPMADVIRemoveBackgroundCachedImageHandler;

@interface VCPMADVIRemoveBackgroundResource : VCPMADVisionResource

@property (nonatomic) BOOL maskOnly;
@property (retain, nonatomic) VCPMADVIRemoveBackgroundCachedImageHandler *cachedImageHandler;

+ (id)sharedResource;

- (void)purge;
- (void).cxx_destruct;
- (long long)activeCost;
- (long long)inactiveCost;

@end
