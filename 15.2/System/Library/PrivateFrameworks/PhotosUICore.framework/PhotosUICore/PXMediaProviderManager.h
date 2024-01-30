@class NSMapTable;

@interface PXMediaProviderManager : NSObject {
    NSMapTable *_imageProviderByClass;
}

@property (class, readonly) PXMediaProviderManager *defaultManager;

- (id)imageProviderForAsset:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
