@class NSString, NSMapTable, SKUIResourceLoader, UIImage, SKUIImageDataConsumer, NSHashTable;

@interface SKUICategoryArtworkLoader : NSObject <SKUIArtworkRequestDelegate> {
    NSMapTable *_artworkRequestIDs;
    NSHashTable *_observers;
    UIImage *_placeholderImage;
}

@property (readonly, nonatomic) SKUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SKUIImageDataConsumer *imageDataConsumer;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)cachedImageForCategory:(id)a0;
- (id)initWithArtworkLoader:(id)a0;
- (void)loadImageForCategory:(id)a0 reason:(long long)a1;

@end
