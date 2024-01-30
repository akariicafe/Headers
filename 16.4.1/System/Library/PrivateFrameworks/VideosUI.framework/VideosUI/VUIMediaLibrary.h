@class VUIMediaLibraryManager, NSString, NSObject;
@protocol VUIMediaLibraryIdentifier;

@interface VUIMediaLibrary : VUIMediaLibraryImageLoader

@property (copy, nonatomic) NSObject<VUIMediaLibraryIdentifier> *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long revision;
@property (readonly, weak, nonatomic) VUIMediaLibraryManager *manager;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isConnectable) BOOL connectable;
@property (readonly, nonatomic) BOOL supportsDRMContent;
@property (readonly, nonatomic) unsigned long long connectionState;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_imageLoadOperationWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (id)_imageLoadParamsForImageLoaderObject:(id)a0;
- (id)_imageLoaderIdentifier;
- (unsigned long long)_incrementRevision;
- (void)_postContentsDidChangeNotification;
- (void)_updateWithTitle:(id)a0 connectionState:(unsigned long long)a1;
- (void)connectWithCompletionHandler:(id /* block */)a0 progressHandler:(id /* block */)a1;
- (id)enqueueFetchRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 manager:(id)a2;
- (id)saveMediaEntity:(id)a0 completionHandler:(id /* block */)a1;

@end
