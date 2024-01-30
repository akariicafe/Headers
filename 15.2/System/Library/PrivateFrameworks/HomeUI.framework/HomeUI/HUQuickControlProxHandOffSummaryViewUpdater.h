@class PCTimerActivity, HUQuickControlSummaryNavigationBarTitleView, NSString, NSObject, PCTelephonyActivity;
@protocol OS_dispatch_source, PCActivity;

@interface HUQuickControlProxHandOffSummaryViewUpdater : NSObject <HFProxControlActivityClientDelegate>

@property (retain, nonatomic) PCTelephonyActivity *homePodPhoneCallActivity;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *phoneCallStatusUpdateTimer;
@property (retain, nonatomic) PCTimerActivity *homePodTimerActivity;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerStatusUpdateTimer;
@property (retain, nonatomic) id<PCActivity> lastActivity;
@property (retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *titleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didUpdateActivities:(id)a0 forProxControlID:(id)a1 disambiguationContext:(id)a2;
- (void)_setupObservableActivityForActivity:(id)a0;
- (void)_updateSummaryViewForActivities:(id)a0 forProxControlID:(id)a1 disambiguationContext:(id)a2;
- (void)_invalidateHomePodPhoneCallStatusUpdateTimer;
- (void)_invalidateHomePodTimerStatusUpdateTimer;
- (BOOL)_isHomePodPhoneCallStatusUpdateTimerActive;
- (void)_startHomePodPhoneCallStatusUpdateTimer;
- (BOOL)_isHomePodTimerStatusUpdateTimerActive;
- (void)_startHomePodTimerStatusUpdateTimer;
- (id)initWithNavigationBarTitleView:(id)a0;

@end
