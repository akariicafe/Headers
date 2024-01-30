@class PXFlexMusicArtworkAsset, NSError, NSObject, PXFlexMusicDownloader;
@protocol OS_dispatch_queue;

@interface _PXFlexMusicImageLoader : NSObject <PXAudioAssetImageLoader>

@property (readonly, nonatomic) PXFlexMusicArtworkAsset *artworkAsset;
@property (readonly, nonatomic) PXFlexMusicDownloader *downloader;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedImageLoadingQueue;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maxSize;
@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (void)startWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_handleDownloadCompleted:(BOOL)a0 error:(id)a1;
- (id)initWithArtworkAsset:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 sharedImageLoadingQueue:(id)a2;

@end
