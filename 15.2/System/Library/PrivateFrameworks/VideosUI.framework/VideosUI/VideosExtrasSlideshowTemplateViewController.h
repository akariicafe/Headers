@class VideosExtrasSlideshowViewController, NSArray, IKSlideshowElement, NSString, UITapGestureRecognizer;

@interface VideosExtrasSlideshowTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasSlideshowViewControllerDataSource, VideosExtrasZoomingImageTransitionParticipant> {
    BOOL _overlayHidden;
    BOOL _preventNavbarAutohide;
}

@property (retain, nonatomic) NSArray *imageElements;
@property (retain, nonatomic) VideosExtrasSlideshowViewController *slideshowViewController;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) IKSlideshowElement *templateElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (void)_handleTap:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (BOOL)showsPlaceholder;
- (id)initWithDocument:(id)a0 options:(id)a1 context:(id)a2;
- (void)slideshowViewController:(id)a0 loadImageAtIndex:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (unsigned long long)numberOfImagesForSlideshowViewController:(id)a0;
- (void)_toggleVisibilityOfNavigationBar;
- (void)_firstImageLoadedHideNavigationBar;
- (BOOL)shouldPerformZoomingImageTransitionFromImageElement:(id)a0 toImageAtIndex:(unsigned long long)a1;

@end
