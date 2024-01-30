@class NSArray;

@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo

@property (readonly, nonatomic) NSArray *plAssets;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)_fetchPhotoAssets:(long long)a0;
- (long long)typeForItemAtIndex:(long long)a0;
- (id)countsByAssetDisplayType;
- (long long)sectionType;
- (id)assetForItemAtIndex:(long long)a0;

@end
