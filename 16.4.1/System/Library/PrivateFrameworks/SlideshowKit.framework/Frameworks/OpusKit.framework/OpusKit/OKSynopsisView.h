@class NSString, OKPresentationViewControllerProxy, NSArray, OKSynopsisInterpreter, OKSynopsisGestureRecognizer, OFUIView, OFNSOperationQueue, OKDimmerView, UICollectionView;
@protocol OKSynopsisViewDelegate;

@interface OKSynopsisView : OFUIView <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CAAnimationDelegate, OKWidgetViewDelegate> {
    OKSynopsisGestureRecognizer *_synopsisGestureRecognizer;
    NSArray *_widgetMediaItems;
    OFNSOperationQueue *_highSpeedOperationQueue;
    OKDimmerView *_backgroundView;
    BOOL _pinchStartedRight;
    BOOL _isAnimating;
    UICollectionView *_collectionView;
    BOOL _scrollViewDidEndDragging;
    struct CGPoint { double x; double y; } _collectionViewContentPreviousOffset;
}

@property (readonly, nonatomic) OFUIView *presentationView;
@property (readonly, nonatomic) OFUIView *navigatorView;
@property (retain, nonatomic) OKSynopsisInterpreter *synopsisInterpreter;
@property (nonatomic) OKPresentationViewControllerProxy *presentationViewController;
@property (nonatomic) id<OKSynopsisViewDelegate> delegate;
@property (readonly, nonatomic) BOOL isDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)show;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)hide;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)updateWithProgress:(double)a0;
- (void)_scrollViewDidCompleteScrolling;
- (void)prepareAdjacentItemWidgetViews:(unsigned long long)a0;
- (void)animateSynopsisViewBlurForDisplay:(BOOL)a0 withProgress:(double)a1;
- (void)animateView:(id)a0 forKeyPath:(id)a1 fromValue:(id)a2 toValue:(id)a3 delay:(double)a4 duration:(double)a5 setDelegate:(id)a6;
- (id)collectionItemAtIndexPath:(id)a0;
- (void)endedGesture;
- (void)evaluateScript:(id)a0 withInfoDictionary:(id)a1 andCompletionBlock:(id /* block */)a2 forWidgetView:(id)a3;
- (void)handleMagnification:(id)a0;
- (void)handleTapCell:(id)a0;
- (void)initCollectionView;
- (id)initWithPresentationViewController:(id)a0;
- (id)pageViewForWidgetView:(id)a0;
- (void)prepareAdjacentItemWidgetViews;
- (void)prepareAdjacentItemWidgetViewsForScrolling;
- (void)prepareForDisplaySynopsisView;
- (void)updateLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSynopsisViewOffsetForVisibleWidgets;
- (void)widgetView:(id)a0 addHighSpeedOperations:(id)a1 andConsumingOperations:(id)a2;
- (void)widgetViewCancelAllOperations:(id)a0;
- (void)widgetViewCancelAllOperations:(id)a0 withIdentifier:(id)a1;
- (id)widgetViewResolution:(id)a0;

@end
