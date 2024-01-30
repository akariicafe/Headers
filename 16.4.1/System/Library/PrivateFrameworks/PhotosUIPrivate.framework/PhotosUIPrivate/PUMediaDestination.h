@interface PUMediaDestination : NSObject

- (void)cancelRequestWithIdentifier:(int)a0;
- (void)ensureEditableCopyOfAsset:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isSavingRequestWithIdentifier:(int)a0;
- (double)progressForRequestWithIdentifier:(int)a0;
- (int)revertEditsForAsset:(id)a0 completionHandler:(id /* block */)a1;
- (int)saveEditsByCopyingAsset:(id)a0 withResourceURL:(id)a1 usingContentEditingOutput:(id)a2 livePhotoEditModel:(id)a3 completionHandler:(id /* block */)a4;
- (int)saveEditsForAsset:(id)a0 usingContentEditingOutput:(id)a1 livePhotoEditModel:(id)a2 useRawIfAvailable:(BOOL)a3 completionHandler:(id /* block */)a4;
- (int)saveInternalEditsForAsset:(id)a0 usingCompositionController:(id)a1 contentEditingOutput:(id)a2 version:(long long)a3 livePhotoEditModel:(id)a4 originalComposition:(id)a5 useRawIfAvailable:(BOOL)a6 completionHandler:(id /* block */)a7;
- (int)saveInternalEditsForAsset:(id)a0 usingCompositionController:(id)a1 contentEditingOutput:(id)a2 version:(long long)a3 livePhotoEditModel:(id)a4 useRawIfAvailable:(BOOL)a5 completionHandler:(id /* block */)a6;
- (BOOL)supportsProgressForRequestWithIdentifier:(int)a0;

@end
