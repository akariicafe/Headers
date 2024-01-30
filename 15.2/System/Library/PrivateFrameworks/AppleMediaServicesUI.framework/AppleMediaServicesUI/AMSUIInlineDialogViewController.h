@class UIViewController, NSString, NSDictionary, AMSUIAppearance, AMSBinaryPromise, AMSEngagement, AMSDialogRequest;
@protocol AMSUIMessageViewControllerDelegate, AMSUIMessageViewController;

@interface AMSUIInlineDialogViewController : UIViewController <AMSUIMessageViewControllerDelegate, AMSEngagementObserver, AMSUIMessageViewController>

@property (retain, nonatomic) AMSEngagement *engagement;
@property (retain, nonatomic) AMSDialogRequest *dialogRequest;
@property (retain, nonatomic) NSString *placement;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) UIViewController<AMSUIMessageViewController> *childContentController;
@property struct CGPoint { double x; double y; } anchorPoint;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (retain, nonatomic) AMSUIAppearance *preferredAppearance;
@property (weak, nonatomic) id<AMSUIMessageViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (void)engagement:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (void)engagement:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)engagement:(id)a0 didUpdateRequest:(id)a1 placement:(id)a2 serviceType:(id)a3;
- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)messageViewController:(id)a0 didLoadDialogRequest:(id)a1;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void)messageViewControllerDidDismiss:(id)a0;
- (void)setPreferredAppearance:(id)a0;
- (void)enqueueImpressionMetrics;
- (BOOL)messageViewController:(id)a0 shouldEnqueueMetricsForDialogResult:(id)a1;
- (id)_dialogView;
- (void)_setDialogRequest:(id)a0;
- (id)preferredAppearance;
- (void)_setupEngagement;
- (void)_setDialogRequestBanner:(id)a0;
- (void)_setDialogRequestBubbleTip:(id)a0;
- (void)_setContentController:(id)a0;
- (void)_didFetchResponse:(id)a0;
- (void)_didFailToFetchWithError:(id)a0;
- (void)_tearDownContentView;
- (id)_findDialogRequestInResponse:(id)a0;
- (id)initWithServiceType:(id)a0 placement:(id)a1;
- (id)initWithServiceType:(id)a0 placement:(id)a1 context:(id)a2;

@end
