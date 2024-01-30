@class PHPhotoLibrary, UIImage, PHImportSource;

@interface PXImportSourceNavigationListItem : PXNavigationListItem

@property (readonly, nonatomic) PHImportSource *importSource;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRemovable;
- (id)glyphImageName;
- (unsigned long long)hash;
- (id)representedObject;
- (id)initWithImportSource:(id)a0 photoLibrary:(id)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 itemCount:(long long)a2;

@end
