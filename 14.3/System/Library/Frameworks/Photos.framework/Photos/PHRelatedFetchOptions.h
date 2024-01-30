@class NSArray, PHAsset, PHPhotoLibrary;

@interface PHRelatedFetchOptions : NSObject

@property (nonatomic, getter=isDebugInfoEnabled) BOOL debugInfoEnabled;
@property (retain, nonatomic) NSArray *excludedAssetCollections;
@property (retain, nonatomic) PHAsset *referenceAsset;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) BOOL enableDiversity;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;

@end
