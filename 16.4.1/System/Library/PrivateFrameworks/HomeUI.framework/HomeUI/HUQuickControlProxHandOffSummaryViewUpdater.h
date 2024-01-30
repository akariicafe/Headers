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

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNavigationBarTitleView:(id)a0;
- (void)_invalidateHomePodPhoneCallStatusUpdateTimer;
- (void)_invalidateHomePodTimerStatusUpdateTimer;
- (BOOL)_isHomePodPhoneCallStatusUpdateTimerActive;
- (BOOL)_isHomePodTimerStatusUpdateTimerActive;
- (void)_setupObservableActivityForActivity:(id)a0;
- (void)_startHomePodPhoneCallStatusUpdateTimer;
- (void)_startHomePodTimerStatusUpdateTimer;
- (void)_updateSummaryViewForActivities:(id)a0 forProxControlID:(id)a1 disambiguationContext:(id)a2;
- (void)didUpdateActivities:(id)a0 forProxControlID:(id)a1 disambiguationContext:(id)a2;

@end
