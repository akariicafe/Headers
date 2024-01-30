@class NSArray, NSDictionary, PHAsset, PHAssetCollection;

@interface PHPhotosPickerOptions : NSObject

@property (copy, nonatomic) NSDictionary *initialAssetsToSelect;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) PHAssetCollection *keyAssetCollection;
@property (copy, nonatomic) NSArray *excludedContentModes;
@property (nonatomic) BOOL hideTabBar;

- (void).cxx_destruct;

@end
