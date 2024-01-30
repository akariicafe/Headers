@class PHPhotoLibrary;

@interface _PXStoryRecipePhotoKitLibraryReference : PFStoryConcreteRecipeLibrary

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)initWithKind:(long long)a0 url:(id)a1;

@end
