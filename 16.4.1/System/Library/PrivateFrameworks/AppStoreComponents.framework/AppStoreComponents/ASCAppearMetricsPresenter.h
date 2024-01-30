@class ASCMetrics, ASCMetricsActivity, NSString, NSNotificationCenter, UIView, ASCMetricsScrollObserver, NSObject;
@protocol OS_os_log, ASCViewModel;

@interface ASCAppearMetricsPresenter : NSObject <ASCMetricsScrollObserverDelegate>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) ASCMetrics *metrics;
@property (nonatomic, getter=isAppeared) BOOL appeared;
@property (nonatomic, getter=isSettingModel) BOOL settingModel;
@property (retain, nonatomic) ASCMetricsScrollObserver *scrollObserver;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (nonatomic, getter=isEnteringBackground) BOOL enteringBackground;
@property (nonatomic, getter=isEnteringForeground) BOOL enteringForeground;
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

- (void)scrollViewDidScroll:(id)a0;
- (id)initWithView:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)appearIfNeeded;
- (void)disappearIfNeeded;
- (void)hostDidEnterBackground;
- (void)hostWillEnterForeground;
- (id)initWithView:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (void)viewDidAction;
- (void)viewDidEndRenderWithPredicate:(id)a0;
- (void)viewDidFailRequest:(id)a0 withError:(id)a1;
- (void)viewDidRetryFailedRequest;
- (void)viewDidSetHidden;

@end
