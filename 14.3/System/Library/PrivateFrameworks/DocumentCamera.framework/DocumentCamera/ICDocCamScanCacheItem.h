@class NSArray, ICDocCamImageCache;

@interface ICDocCamScanCacheItem : NSObject

@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (retain, nonatomic) NSArray *docInfos;

- (id)init;
- (void).cxx_destruct;
- (id)docInfoForScanDataDelegate:(id)a0;
- (id)initWithImageCache:(id)a0 docInfos:(id)a1;
- (id)imageForScanDataDelegateIdentifier:(id)a0;
- (void)deleteCacheImages;
- (void)doneBuildingCache;

@end
