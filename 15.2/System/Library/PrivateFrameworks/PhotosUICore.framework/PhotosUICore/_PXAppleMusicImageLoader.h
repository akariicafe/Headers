@class PXAppleMusicArtworkAsset, NSError, NSURLSessionDataTask;

@interface _PXAppleMusicImageLoader : NSObject <PXAudioAssetImageLoader> {
    NSURLSessionDataTask *_dataTask;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) PXAppleMusicArtworkAsset *asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) NSError *error;

- (id)initWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startWithCompletion:(id /* block */)a0;
- (void)_beginDownloadFromURL:(id)a0;
- (void)_handleRequestData:(id)a0 response:(id)a1 error:(id)a2;
- (void)_handleURLFetchFailureWithError:(id)a0;

@end
