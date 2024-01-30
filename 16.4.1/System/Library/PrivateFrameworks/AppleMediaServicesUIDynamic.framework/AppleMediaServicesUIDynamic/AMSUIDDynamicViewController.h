@class NSDictionary, NSString, UINavigationItem;

@interface AMSUIDDynamicViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ clientOptions;
    void /* unknown type, empty encoding */ internalClientOptions;
    void /* unknown type, empty encoding */ mediaClientIdentifier;
    void /* unknown type, empty encoding */ metricsOverlay;
    void /* unknown type, empty encoding */ automaticErrorRetry;
    void /* unknown type, empty encoding */ child;
    void /* unknown type, empty encoding */ preferredSizingModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_childNavigationController;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ preloadingCompletionPromise;
    void /* unknown type, empty encoding */ urlPromise;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ account;
@property (nonatomic) void /* unknown type, empty encoding */ anonymousMetrics;
@property (nonatomic, retain) void /* unknown type, empty encoding */ bag;
@property (nonatomic, retain) void /* unknown type, empty encoding */ clientInfo;
@property (nonatomic, copy) NSDictionary *clientOptions;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) NSDictionary *internalClientOptions;
@property (nonatomic, copy) NSString *mediaClientIdentifier;
@property (nonatomic, copy) NSDictionary *metricsOverlay;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, copy) NSString *title;

- (id)animationControllerForDismissedController:(id)a0;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)preload;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)cancelButtonAction;
- (id)initWithBag:(id)a0 URL:(id)a1;
- (id)initWithBag:(id)a0 bagValue:(id)a1;
- (void)legacyPurchaseDidSucceed:(id)a0;
- (void)reloadContentViewImpressionItems;

@end
