@class NSArray;

@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo

@property (readonly, nonatomic) NSArray *plAssets;

- (long long)sectionType;
- (id)assetForItemAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (long long)typeForItemAtIndex:(long long)a0;
- (id)countsByAssetDisplayType;
- (id)_fetchPhotoAssets:(long long)a0;

@end
