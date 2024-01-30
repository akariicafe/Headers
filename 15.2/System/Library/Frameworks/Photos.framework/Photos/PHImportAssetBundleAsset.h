@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset

@property (retain, nonatomic) PFAssetBundle *assetBundle;

- (id)title;
- (id)timeZone;
- (id)creationDate;
- (void).cxx_destruct;
- (id)initWithAssetBundleAtURL:(id)a0 withImportSource:(id)a1;
- (id)assetDescription;
- (id)keywordTitles;
- (id)accessibilityDescription;

@end
