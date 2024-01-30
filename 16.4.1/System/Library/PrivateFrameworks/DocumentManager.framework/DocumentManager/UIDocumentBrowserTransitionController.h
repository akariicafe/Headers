@class NSString, NSProgress, NSOperationQueue, UIView, NSURL, FPItem;
@protocol DOCServiceTransitionProtocol, DOCServiceDocumentBrowserViewControllerInterface;

@interface UIDocumentBrowserTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {
    NSURL *_itemURL;
    FPItem *_item;
    id<DOCServiceDocumentBrowserViewControllerInterface> _serviceDocumentBrowserProxy;
    UIView *_referenceView;
}

@property BOOL transitionDidFinish;
@property (retain, nonatomic) id<DOCServiceTransitionProtocol> transitionController;
@property (retain, nonatomic) NSOperationQueue *transitionControllerQueue;
@property (retain, nonatomic) NSProgress *loadingProgress;
@property (weak, nonatomic) UIView *targetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)_commonInit;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 documentBrowserProxy:(id)a1 referenceView:(id)a2;
- (id)initWithItemURL:(id)a0 documentBrowserProxy:(id)a1 referenceView:(id)a2;

@end
