@class PHImageResourceChooser, NSString, NSURL, PLProgressFollower, PHImageDisplaySpec, NSObject, PHImageRequestBehaviorSpec, PHImageResult, PHImageDecoderAsyncDecodeRequestHandle;
@protocol PHImageRequestDelegate, OS_dispatch_semaphore;

@interface PHImageRequest : PHMediaRequest {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PHImageDecoderAsyncDecodeRequestHandle *_asyncDecodeRequestHandle;
    PHImageResult *_imageResult;
    PHImageResourceChooser *_chooser;
    BOOL _forceIgnoreCache;
    NSObject<OS_dispatch_semaphore> *_syncDownloadWaitSemaphore;
    NSURL *_configuredImageURL;
    NSString *_configuredImageUTI;
    long long _configuredExifOrientation;
    PLProgressFollower *_progressFollower;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } desiredImageSize;
@property (readonly, weak, nonatomic) id<PHImageRequestDelegate> delegate;
@property (retain, nonatomic) PHImageDisplaySpec *displaySpec;
@property (retain, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec;

- (long long)downloadPriority;
- (void)startRequest;
- (void)configureWithURL:(id)a0 uniformTypeIdentifier:(id)a1 exifOrientation:(int)a2;
- (long long)downloadIntent;
- (void)handleAvailabilityChangeForResource:(id)a0 url:(id)a1 info:(id)a2 error:(id)a3;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 displaySpec:(id)a5 behaviorSpec:(id)a6 chooser:(id)a7 delegate:(id)a8;
- (void)cancel;
- (void)dealloc;
- (BOOL)isNetworkAccessAllowed;
- (void)_decodeImageConfiguredWithURL:(id)a0 isPrimaryFormat:(BOOL)a1;
- (BOOL)isSynchronous;
- (id)description;
- (void).cxx_destruct;

@end
