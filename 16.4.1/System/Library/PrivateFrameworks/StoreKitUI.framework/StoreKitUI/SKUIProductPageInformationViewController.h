@class SKUIProductPageProductInfo, NSString, SKUIClientContext, NSOperationQueue, SKUIProductPageItem, SKUIContentRatingArtworkResourceLoader, SKUIProductInformationView;

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver> {
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIProductInformationView *_informationView;
    SKUIProductPageProductInfo *_productInfo;
}

@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) SKUIProductPageItem *item;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (id)_contentRatingResourceLoader;
- (id)_informationLinesWithItem:(id)a0 ratingImage:(id)a1;
- (id)_informationLinesWithProductInfo:(id)a0;
- (void)_updateLinesWithRatingImage:(id)a0;
- (void)contentRatingArtworkLoader:(id)a0 didLoadImage:(id)a1 forContentRating:(id)a2;
- (id)initWithItem:(id)a0 clientContext:(id)a1;
- (id)initWithProductInformation:(id)a0 clientContext:(id)a1;

@end
