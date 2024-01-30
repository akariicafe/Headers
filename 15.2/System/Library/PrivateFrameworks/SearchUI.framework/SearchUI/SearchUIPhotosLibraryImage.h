@class PHAsset, SFPhotosLibraryImage;

@interface SearchUIPhotosLibraryImage : SearchUIImage

@property (retain) SFPhotosLibraryImage *sfImage;
@property (retain) PHAsset *asset;
@property struct CGSize { double width; double height; } pixelSize;

- (id)photoIdentifier;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (BOOL)useFastPathShadow;
- (id)fetchAsset;

@end
