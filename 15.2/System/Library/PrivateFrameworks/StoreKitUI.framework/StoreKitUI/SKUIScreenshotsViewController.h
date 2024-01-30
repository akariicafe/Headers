@class NSString, NSArray, SKUIVideoImageDataConsumer, SKUIClientContext, NSOperationQueue, NSMutableArray, UICollectionView, SKUIScreenshotDataConsumer;
@protocol SKUIScreenshotsDelegate;

@interface SKUIScreenshotsViewController : UIViewController <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionView *_collectionView;
    SKUIScreenshotDataConsumer *_dataConsumer;
    NSArray *_screenshots;
    NSMutableArray *_screenshotImages;
    NSMutableArray *_screenshotRawImages;
    struct CGSize { double width; double height; } _screenshotMaxSize;
    SKUIVideoImageDataConsumer *_trailerConsumer;
    NSArray *_trailers;
    NSMutableArray *_trailerImages;
}

@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUIScreenshotsDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)_setImage:(id)a0 forIndex:(long long)a1;
- (long long)numberOfItemsInSlideshowViewController:(id)a0;
- (id)slideshowViewController:(id)a0 dataConsumerAtIndex:(long long)a1;
- (id)slideshowViewController:(id)a0 imageURLAtIndex:(long long)a1;
- (id)slideshowViewController:(id)a0 placeholderImageAtIndex:(long long)a1;
- (id)slideshowViewController:(id)a0 poppedImageViewAtIndex:(long long)a1;
- (void)slideshowViewController:(id)a0 scrollToImageAtIndex:(long long)a1;
- (id)initWithTrailers:(id)a0 screenshots:(id)a1 clientContext:(id)a2;
- (void)_setTrailerImage:(id)a0 forIndex:(long long)a1;

@end
