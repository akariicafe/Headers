@class NSString, NSMapTable, SKUIResourceLoader, UIImage, SKUIImageDataConsumer, NSHashTable;

@interface SKUIContentRatingArtworkResourceLoader : NSObject <SKUIArtworkRequestDelegate> {
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
- (id)_loadImage:(id)a0;
- (id)_urlForContentRating:(id)a0 clientContext:(id)a1;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)cachedImageForContentRating:(id)a0 withClientContext:(id)a1;
- (id)initWithArtworkLoader:(id)a0;
- (void)loadImageForContentRating:(id)a0 clientContent:(id)a1 reason:(long long)a2;

@end
