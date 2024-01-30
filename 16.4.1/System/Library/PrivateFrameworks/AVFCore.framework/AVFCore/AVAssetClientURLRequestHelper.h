@class AVWeakReference, AVAssetResourceLoader;

@interface AVAssetClientURLRequestHelper : NSObject {
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToAsset;
    AVWeakReference *_weakReferenceToResourceLoader;
}

@property (copy, nonatomic) id /* block */ figAssetProvider;
@property (weak, nonatomic) AVAssetResourceLoader *resourceLoader;
@property (readonly, nonatomic) const struct OpaqueFigAsset { } *figAsset;

- (id)initWithAsset:(id)a0;
- (id)URLAsset;
- (void)dealloc;

@end
