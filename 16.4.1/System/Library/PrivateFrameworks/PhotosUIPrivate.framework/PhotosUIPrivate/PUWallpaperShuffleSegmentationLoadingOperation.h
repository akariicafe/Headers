@class NSString, PFPosterMedia, NSURL, PHPhotoLibrary, PISegmentationLoader, NSError;
@protocol PISegmentationItem;

@interface PUWallpaperShuffleSegmentationLoadingOperation : PXAsyncOperation

@property (readonly, copy, nonatomic) NSString *operationType;
@property (retain, nonatomic) PISegmentationLoader *loader;
@property (readonly, nonatomic) PFPosterMedia *posterMedia;
@property (readonly, nonatomic) NSURL *assetDirectory;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isPreloading;
@property (retain, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ downloadProgressHandler;

- (void)cancel;
- (void).cxx_destruct;
- (void)px_finishIfPossible;
- (BOOL)px_shouldWaitForCancel;
- (void)px_start;
- (void)_handleSegmentationResult:(id)a0 forAssetUUID:(id)a1 loadingError:(id)a2;
- (id)initWithPosterMedia:(id)a0 assetDirectory:(id)a1 photoLibrary:(id)a2 isPreloading:(BOOL)a3;
- (BOOL)tryLoadSegmentationFromDirectory;

@end
