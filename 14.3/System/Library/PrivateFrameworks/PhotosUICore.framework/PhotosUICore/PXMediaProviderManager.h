@class NSMapTable;

@interface PXMediaProviderManager : NSObject {
    NSMapTable *_imageProviderByClass;
}

@property (class, readonly) PXMediaProviderManager *defaultManager;

- (id)init;
- (void).cxx_destruct;
- (id)imageProviderForAsset:(id)a0;

@end
