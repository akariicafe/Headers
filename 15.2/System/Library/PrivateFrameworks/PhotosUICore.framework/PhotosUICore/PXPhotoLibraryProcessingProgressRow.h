@class PHPhotoLibrary;

@interface PXPhotoLibraryProcessingProgressRow : PTButtonRow

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)tableViewCellClass;
- (id)initWithPhotoLibrary:(id)a0 titleKeyPath:(id)a1 imageKeyPath:(id)a2;
- (id)defaultUIAction;

@end
