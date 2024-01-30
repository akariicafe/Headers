@interface PXPhotoKitMomentShareStatus : PXMomentShareStatus

- (id)owner;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)_actionManager;
- (id)initWithPhotoKitMomentShare:(id)a0;
- (void)_prepareFetchResultsForPhotoLibrary:(id)a0;

@end
