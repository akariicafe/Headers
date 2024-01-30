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

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)enqueueFetchRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 manager:(id)a2;
- (void)_postContentsDidChangeNotification;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)a0;
- (id)saveMediaEntity:(id)a0 completionHandler:(id /* block */)a1;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)a0;
- (id)_imageLoadOperationWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (void)connectWithCompletionHandler:(id /* block */)a0 progressHandler:(id /* block */)a1;
- (unsigned long long)_incrementRevision;
- (void)_updateWithTitle:(id)a0 connectionState:(unsigned long long)a1;

@end
