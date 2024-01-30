@class NSOperationQueue, SKUIGift, SKUIGiftConfiguration, SSVLoadURLOperation;

@interface SKUIGiftStepViewController : UIViewController {
    SSVLoadURLOperation *_loadOperation;
}

@property (readonly, nonatomic) SKUIGift *gift;
@property (readonly, nonatomic) SKUIGiftConfiguration *giftConfiguration;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)_finishImageLoadWithImage:(id)a0 error:(id)a1 block:(id /* block */)a2;
- (void)finishGiftingWithResult:(BOOL)a0;
- (id)initWithGift:(id)a0 configuration:(id)a1;
- (void)loadItemArtworkWithArtworkContext:(id)a0 completionBlock:(id /* block */)a1;

@end
