@class NSURLSession, NSString, NSMutableDictionary, UIImage, NSOperationQueue, NSURLCache, NSObject;
@protocol OS_dispatch_queue;

@interface STSImageCache : NSObject <NSURLSessionDownloadDelegate> {
    NSOperationQueue *_operationQueue;
    NSURLSession *_imageSession;
    NSURLCache *_urlCache;
    NSMutableDictionary *_staticImageCache;
    NSMutableDictionary *_firstFrameImageCache;
    NSMutableDictionary *_imageInfoCache;
    NSMutableDictionary *_downloadOperationInfos;
    NSMutableDictionary *_cancelledDownloadOperationInfos;
    NSObject<OS_dispatch_queue> *_queuedOperationsInfoQueue;
}

@property (retain, nonatomic) UIImage *searchProviderImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)cancelAllDownloads;
- (void)clearInMemoryCache;
- (BOOL)_allowImageInfoCaching;
- (id)_imageFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)_imageInfoUsingAVAssetReaderWithFileURL:(id)a0;
- (id)_imageInfoWithData:(id)a0;
- (id)_imageSession;
- (void)cancelQueuedDownloadForURL:(id)a0;
- (id)fetchCachedImageInfoForURL:(id)a0;
- (id)fetchCachedStaticImageForURL:(id)a0;
- (id)fetchCachedStaticImageForURL:(id)a0 hasMultipleFrames:(BOOL *)a1;
- (void)fetchImageDataWithURL:(id)a0 priority:(long long)a1 isSource:(BOOL)a2 begin:(id /* block */)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)fetchImageWithURL:(id)a0 priority:(long long)a1 isSource:(BOOL)a2 begin:(id /* block */)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)setPriority:(long long)a0 forQueuedDownloadWithURL:(id)a1;

@end
