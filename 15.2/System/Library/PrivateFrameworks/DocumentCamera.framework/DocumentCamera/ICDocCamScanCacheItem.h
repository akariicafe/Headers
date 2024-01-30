@class NSArray, ICDocCamImageCache;

@interface ICDocCamScanCacheItem : NSObject

@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (retain, nonatomic) NSArray *docInfos;

- (void).cxx_destruct;
- (id)init;
- (id)docInfoForScanDataDelegate:(id)a0;
- (id)initWithImageCache:(id)a0 docInfos:(id)a1;
- (id)imageForScanDataDelegateIdentifier:(id)a0;
- (void)deleteCacheImages;
- (void)doneBuildingCache;

@end
