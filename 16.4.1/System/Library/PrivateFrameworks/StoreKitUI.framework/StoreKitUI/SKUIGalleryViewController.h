@class NSString, SKUIGalleryPageComponent, SKUIResourceLoader, SKUIMediaComponent, UIPageViewController, UITapGestureRecognizer, NSObject, NSMapTable, UIPageControl;
@protocol OS_dispatch_source, SKUIEmbeddedMediaViewDelegate;

@interface SKUIGalleryViewController : UIViewController <SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {
    SKUIResourceLoader *_artworkLoader;
    NSMapTable *_componentArtworkRequests;
    NSObject<OS_dispatch_source> *_cycleTimer;
    UIPageControl *_pageIndicator;
    UIPageViewController *_pageViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (readonly, nonatomic) SKUIGalleryPageComponent *galleryComponent;
@property (weak, nonatomic) id<SKUIEmbeddedMediaViewDelegate> embeddedMediaDelegate;
@property (readonly, nonatomic) SKUIMediaComponent *selectedMediaComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)_tapAction:(id)a0;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)_selectedViewController;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)_stopCycleTimer;
- (void)_finishPaneAnimation;
- (id)_newViewControllerWithIndex:(long long)a0;
- (id)_newViewWithMediaComponent:(id)a0;
- (void)_showNextPaneAnimated:(BOOL)a0;
- (void)_startCycleTimer;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithGalleryComponent:(id)a0 artworkLoader:(id)a1;
- (void)loadArtworkForChildComponent:(id)a0 reason:(long long)a1 constraintWidth:(double)a2;
- (void)performActionForSelectedComponentAnimated:(BOOL)a0;

@end
