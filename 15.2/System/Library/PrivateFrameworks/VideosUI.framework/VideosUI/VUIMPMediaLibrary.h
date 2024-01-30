@class NSObject, NSOperationQueue, MPMediaLibrary;
@protocol OS_dispatch_queue;

@interface VUIMPMediaLibrary : VUIMediaLibrary

@property (nonatomic) unsigned long long connectionState;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (unsigned long long)_connectionStateFromMPMediaLibraryStatus:(long long)a0;

- (id)title;
- (void).cxx_destruct;
- (void)dealloc;
- (id)enqueueFetchRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 manager:(id)a2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)a0;
- (id)saveMediaEntity:(id)a0 completionHandler:(id /* block */)a1;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)a0;
- (id)_imageLoadOperationWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)a0;
- (BOOL)hasImageCache;
- (void)_handleMediaLibraryStatusDidChangeNotification:(id)a0;
- (void)_enqueueProcessingBlock:(id /* block */)a0;
- (id)initWithMPMediaLibrary:(id)a0 type:(unsigned long long)a1 manager:(id)a2;
- (void)connectWithCompletionHandler:(id /* block */)a0 progressHandler:(id /* block */)a1;

@end
