@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PLFigPreheatItem : PLPreheatItem {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject *_cachedImage;
    BOOL _cachedImageCancelled;
    unsigned long long _requestID;
    struct FigPhotoDecompressionContainer { } *_container;
    NSObject<OS_dispatch_group> *_requestGroup;
    NSObject<OS_dispatch_group> *_waitGroup;
    BOOL _dataIsLoading;
    _Atomic BOOL _cancelled;
    _Atomic BOOL _hasCachedImage;
}

@property (setter=_setHasCachedImage:) BOOL _hasCachedImage;
@property (readonly, nonatomic) unsigned int options;
@property (readonly, copy, nonatomic) NSString *imagePath;

- (void)startPreheatRequestWithCompletionHandler:(id /* block */)a0;
- (void)cancelPreheatRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)decodeSessionOptions;
- (void)_uncancel;
- (void)_cancel;
- (id)initWithImagePath:(id)a0 format:(unsigned short)a1 imageType:(long long)a2 optimalSourcePixelSize:(struct CGSize { double x0; double x1; })a3 options:(unsigned int)a4;
- (id)cachedImage:(BOOL *)a0;
- (id)cachedImageIfAvailable:(BOOL *)a0;
- (BOOL)addImageHandler:(id /* block */)a0;
- (id)initialDecodeSessionOptions;
- (void)_cacheImage;
- (void)_loadPreheatDataWithHandler:(id /* block */)a0;
- (id)preheatData;
- (void)_leaveWaitGroupIfNeeded;

@end
