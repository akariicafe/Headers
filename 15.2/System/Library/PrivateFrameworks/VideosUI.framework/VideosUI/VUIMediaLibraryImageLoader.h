@class NSOperationQueue, NSMutableDictionary, NSString;

@interface VUIMediaLibraryImageLoader : NSObject <TVImageLoader>

@property (retain, nonatomic) NSMutableDictionary *imageLoadContextsByImageIdentifier;
@property (retain, nonatomic) NSOperationQueue *imageLoadOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_scaledImageIdentifierWithImageIdentifier:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)a0;
- (id)_imageLoadOperationWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (void)_cancelAllImageLoads;
- (id)_imageIdentifierWithImageLoadParams:(id)a0;
- (id)imageKeyForObject:(id)a0;
- (void)cancelLoad:(id)a0;
- (id)loadImageForObject:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2 imageDirection:(long long)a3 requestLoader:(id)a4 completionHandler:(id /* block */)a5;

@end
