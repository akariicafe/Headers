@class _TVDecoratorRequest, TVImageDecorator;
@protocol IKNetworkRequestLoader;

@interface TVImageProxy : NSObject <NSCopying>

@property (retain, nonatomic) id imageLoader;
@property (nonatomic) long long groupType;
@property (retain, nonatomic) id requestToken;
@property (retain, nonatomic) _TVDecoratorRequest *decoratorRequestToken;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) id imageDidWriteObserver;
@property (weak, nonatomic) id<IKNetworkRequestLoader> requestLoader;
@property (nonatomic) BOOL loadSynchronouslyIfCached;
@property (nonatomic) BOOL writeToAssetLibrary;
@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedSize;
@property (nonatomic) BOOL cacheOnLoad;
@property (nonatomic) BOOL allowsSubstitutionForOriginal;
@property (retain, nonatomic) TVImageDecorator *decorator;
@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ writeCompletionHandler;
@property (nonatomic, getter=isImageAvailable) BOOL imageAvailable;
@property (nonatomic) long long imageDirection;

+ (id)_imageDecoratorQueue;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)load;
- (unsigned long long)hash;
- (void)dealloc;
- (void)cancel;
- (id)initWithObject:(id)a0 imageLoader:(id)a1 groupType:(long long)a2;
- (id)_decoratedImageAssetPath;
- (id)_imageLoaderKey;
- (id)_originalImageAssetPath;
- (void)_callCompletionHandlerWithImage:(id)a0 error:(id)a1 finished:(BOOL)a2;
- (void)_callWriteCompletionHandlerWithPath:(id)a0 error:(id)a1 finished:(BOOL)a2;
- (void)_completeImageLoadWithImage:(id)a0 imagePath:(id)a1 error:(id)a2 assetKey:(id)a3 expiryDate:(id)a4 tags:(id)a5 requestRecord:(id)a6;
- (id)_originalImageAssetKey;
- (id)_decoratedImageAssetKey;
- (void)_decorateAndWriteImage:(id)a0 imagePath:(id)a1 scaleToSize:(struct CGSize { double x0; double x1; })a2 cropToFit:(BOOL)a3 scalingResult:(unsigned long long)a4 assetKey:(id)a5 expiryDate:(id)a6 tags:(id)a7 requestRecord:(id)a8;
- (void)_imageDidWriteHandler:(id)a0;
- (id)_assetKeyWithImageLoaderKey:(id)a0 decoratorIdentifier:(id)a1;
- (id)_imageAssetPathWithAssetKey:(id)a0;
- (id)_decoratorIdentifier;
- (BOOL)isOfSameOriginAs:(id)a0;
- (void)loadWithWeakObject:(id)a0 completionHandler:(id /* block */)a1;

@end
