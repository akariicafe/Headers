@class PHImageRequest, NSProgress, PHLivePhotoRequestOptions, PHLivePhotoResult, PHVideoRequest;

@interface PHLivePhotoRequestContext : PHMediaRequestContext {
    NSProgress *_imageProgress;
    NSProgress *_videoProgress;
    PHLivePhotoResult *_livePhotoResult;
    PHImageRequest *_fastImageRequest;
    PHImageRequest *_highQualityImageRequest;
    PHVideoRequest *_videoRequest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _imagePartCompleted;
    BOOL _videoPartCompleted;
}

@property (readonly, nonatomic) PHLivePhotoRequestOptions *livePhotoOptions;

- (id /* block */)progressHandler;
- (BOOL)shouldReportProgress;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2 result:(id)a3;
- (BOOL)representsShareableHighQualityResource;
- (void).cxx_destruct;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (id)initialRequests;
- (long long)type;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (BOOL)isNetworkAccessAllowed;
- (BOOL)_shouldRequestVideo;
- (id)_lazyImageProgress;
- (id)_lazyVideoProgress;
- (id)progresses;

@end
