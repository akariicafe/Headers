@class ASCMetrics, ASCMetricsActivity, NSString, UIView, ASCMetricsScrollObserver, NSObject;
@protocol OS_os_log, ASCViewModel;

@interface ASCAppearMetricsPresenter : NSObject <ASCMetricsScrollObserverDelegate>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) ASCMetrics *metrics;
@property (nonatomic, getter=isAppeared) BOOL appeared;
@property (nonatomic, getter=isSettingModel) BOOL settingModel;
@property (retain, nonatomic) ASCMetricsScrollObserver *scrollObserver;
@property (readonly, nonatomic) BOOL canAppear;
@property (readonly, nonatomic) BOOL canDisappear;
@property (readonly, weak, nonatomic) UIView *view;
@property (copy, nonatomic) ASCMetricsActivity *activity;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) id<ASCViewModel> model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidMoveToWindow;
- (id)initWithView:(id)a0 metrics:(id)a1;
- (void)disappearIfNeeded;
- (void)appearIfNeeded;
- (void)viewDidSetHidden;
- (void)viewDidAction;
- (void)viewDidEndRenderWithPredicate:(id)a0;
- (void)viewDidFailRequest:(id)a0 withError:(id)a1;
- (void)viewDidRetryFailedRequest;

@end
