@interface PHDuplicateDetection : NSObject

+ (BOOL)assetsArePendingForDuplicateMergeProcessing:(id)a0 inPhotoLibrary:(id)a1;
+ (void)mergeDuplicateAssetsWithLocalIdentifiers:(id)a0 inPhotoLibrary:(id)a1 completionHandler:(id /* block */)a2;

@end
