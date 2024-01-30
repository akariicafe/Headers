@class NSObject, NSOperationQueue, VUIPlistMediaDatabase;
@protocol OS_dispatch_queue;

@interface VUIPlistMediaLibrary : VUIDeviceMediaLibrary

@property (retain, nonatomic) VUIPlistMediaDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;

- (void)dealloc;
- (id)title;
- (void).cxx_destruct;
- (void)_enqueueProcessingBlock:(id /* block */)a0;
- (void)_handleMediaDatabaseContentsDidChangeNotification:(id)a0;
- (id)_imageLoadOperationWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (id)_imageLoadParamsForImageLoaderObject:(id)a0;
- (id)_imageLoaderIdentifier;
- (id)enqueueFetchRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 manager:(id)a2;
- (id)initWithURL:(id)a0 manager:(id)a1;
- (id)saveMediaEntity:(id)a0 completionHandler:(id /* block */)a1;

@end
