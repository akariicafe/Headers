@class NSString, AMSUIWebClientContext, NSMutableSet, AMSUIWebContainerViewController, NSLock;

@interface AMSUIWebFlowController : NSObject

@property (readonly, weak, nonatomic) AMSUIWebContainerViewController *rootContainer;
@property (readonly, weak, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSString *currentRefreshToken;
@property (retain, nonatomic) NSLock *timeoutLock;
@property (retain, nonatomic) NSMutableSet *timeouts;
@property (nonatomic) unsigned long long previousNavigationIndex;
@property (nonatomic) long long previousPageIndex;
@property (readonly, weak, nonatomic) AMSUIWebContainerViewController *currentContainer;

- (void)presentWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)dismissViewController;
- (void)popViewController;
- (id)_refreshPageWithForContainer:(id)a0 options:(id)a1 isRetry:(BOOL)a2;
- (void)_setWindowSize:(struct CGSize { double x0; double x1; })a0 onContainer:(id)a1 completion:(id /* block */)a2;
- (void)_takeSnapshotFromContainer:(id)a0 completion:(id /* block */)a1;
- (id)initWithRootContainer:(id)a0 context:(id)a1;
- (void)performSafeTransitionFrom:(id)a0 block:(id /* block */)a1;
- (void)popViewControllerToRelativeIndex:(long long)a0;
- (void)pushWithOptions:(id)a0;
- (id)refreshPageForContainer:(id)a0 options:(id)a1;
- (id)replaceWithPageModel:(id)a0 forContainer:(id)a1 options:(id)a2;
- (void)startTimeout:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)startTimeoutInterruption;
- (void)stopTimeoutInterruption;

@end
