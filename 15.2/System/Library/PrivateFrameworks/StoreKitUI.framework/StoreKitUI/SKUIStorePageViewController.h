@class NSString, SSMetricsPageEvent, SSVLoadURLOperation, UIRefreshControl, SKUIClientContext, NSOperationQueue, SKUIStorePage, NSURLRequest, SKUIMetricsController, NSDictionary, SKUIColorScheme, SKUIStorePageSectionsViewController;
@protocol SKUIStorePageDelegate;

@interface SKUIStorePageViewController : UIViewController <SKUIStorePageSectionsDelegate, SKUIViewControllerTesting, SKUIMetricsViewController, UIViewControllerRestoration> {
    NSString *_lastDataConsumerClassName;
    SSMetricsPageEvent *_lastPageEvent;
    NSURLRequest *_lastRequest;
    BOOL _loadOnAppear;
    SSVLoadURLOperation *_loadOperation;
    SKUIMetricsController *_metricsController;
    NSString *_performanceTestName;
    NSDictionary *_performanceTestOptions;
    SKUIColorScheme *_placeholderColorScheme;
    SKUIStorePageSectionsViewController *_sectionsViewController;
}

@property (readonly, nonatomic, getter=isSkLoading) BOOL skLoading;
@property (copy, nonatomic) SKUIStorePage *storePage;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUIStorePageDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithRestorationIdentifierPath:(id)a0 coder:(id)a1;
+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)decodeRestorableStateWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)_colorScheme;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)loadView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setMetricsController:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_setMetricsController:(id)a0;
- (void)sectionsViewControllerDidDismissOverlayController:(id)a0;
- (BOOL)performTestWithName:(id)a0 options:(id)a1;
- (BOOL)sectionsViewController:(id)a0 showProductPageForItem:(id)a1;
- (BOOL)sectionsViewController:(id)a0 showStorePageForURL:(id)a1;
- (id)_sectionsViewController;
- (void)_metricsEnterEventNotification:(id)a0;
- (void)loadURLRequest:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)loadURLRequest:(id)a0 withDataConsumer:(id)a1 completionBlock:(id /* block */)a2;
- (void)_loadWithOperation:(id)a0 completionBlock:(id /* block */)a1;
- (void)_reloadStorePage;
- (void)_setStorePage:(id)a0 error:(id)a1;
- (void)_recordMetricsPageEvent:(id)a0 forStorePage:(id)a1;
- (void)_runScrollTestWithName:(id)a0 options:(id)a1;
- (void)_showProductPage:(id)a0 withPageEvent:(id)a1;
- (void)_runPerformanceTestAfterPageLoad;
- (void)cancelPageLoad;
- (id)activeMetricsController;
- (void)loadURL:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)loadURL:(id)a0 withDataConsumer:(id)a1 completionBlock:(id /* block */)a2;
- (void)loadWithJSONData:(id)a0 fromOperation:(id)a1 completionBlock:(id /* block */)a2;
- (void)_runPerformanceTestAfterIdle;

@end
