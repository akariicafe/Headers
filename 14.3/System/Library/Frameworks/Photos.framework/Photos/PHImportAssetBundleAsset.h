@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset

@property (retain, nonatomic) PFAssetBundle *assetBundle;

- (id)exifImageDate;
- (id)exifTimeZone;
- (void).cxx_destruct;
- (id)keywordTitles;
- (id)initWithAssetBundleAtURL:(id)a0 withImportSource:(id)a1;
- (id)assetDescription;
- (id)title;
- (id)accessibilityDescription;

@end
