@class UIPageControl, NSString, SKUIClientContext, NSOperationQueue, NSMutableDictionary, NSMutableArray, SKUIGiftThemeCollectionView;
@protocol SKUISlideshowViewControllerDelegate, SKUISlideshowViewControllerDataSource;

@interface SKUIIPhoneSlideshowViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIGiftThemeCollectionView *_collectionView;
    UIPageControl *_pageControl;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_placeholderQueue;
    NSMutableArray *_images;
    NSMutableDictionary *_placeholderImages;
    long long _indexToScrollToOnLoadView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUISlideshowViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<SKUISlideshowViewControllerDelegate> delegate;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_doneAction:(id)a0;
- (id)_imageAtIndex:(long long)a0;
- (id)_placeholderImageAtIndex:(long long)a0;
- (void)_reloadPageControl;
- (void)_reloadSize;
- (void)_setImage:(id)a0 atIndex:(long long)a1;

@end
