@class PHFetchResult, NSArray, PHPhotoLibrary, PHCollection;

@interface PXPhotoKitAssetDataSourceMangerConfiguration : NSObject {
    long long _type;
    id _content;
}

@property (readonly, nonatomic) PHFetchResult *assetCollections;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PHCollection *containerCollection;
@property (retain, nonatomic) NSArray *fetchPropertySets;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 content:(id)a1;
- (id)initWithAssetCollections:(id)a0;

@end
