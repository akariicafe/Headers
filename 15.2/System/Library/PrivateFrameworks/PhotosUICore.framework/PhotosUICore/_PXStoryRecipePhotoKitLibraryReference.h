@class PHPhotoLibrary;

@interface _PXStoryRecipePhotoKitLibraryReference : PFStoryConcreteRecipeLibrary

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)initWithKind:(long long)a0 url:(id)a1;

@end
