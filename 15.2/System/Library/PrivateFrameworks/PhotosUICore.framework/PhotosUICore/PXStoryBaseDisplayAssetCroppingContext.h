@class PHFetchOptions, NSObject;
@protocol OS_os_log;

@interface PXStoryBaseDisplayAssetCroppingContext : NSObject <PXStoryDisplayAssetCroppingContext>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) PHFetchOptions *fetchOptions;

- (void).cxx_destruct;
- (id)init;
- (void)requestIndividualFaceRectsInAsset:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;
- (id)orderedFacesForAsset:(id)a0 featuredFaceCount:(long long *)a1;
- (id)adjustOrderedFaces:(id)a0 featuredFaceCount:(long long *)a1;

@end
