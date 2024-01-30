@class NSString;
@protocol DBStatusBarButtonStateManagerDelegate;

@interface DBStatusBarHomeButtonStateManager : NSObject <DBDashboardViewStateObserving, DBHomeViewPageChangeObserving>

@property (weak, nonatomic) id<DBStatusBarButtonStateManagerDelegate> delegate;
@property (nonatomic) long long currentPageIndex;
@property (nonatomic) unsigned long long currentViewState;
@property (nonatomic) long long minimumPageIndex;
@property (nonatomic) long long firstIconPageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_updateHomeButtonState;
- (void)dashboardRootViewController:(id)a0 didChangeToViewState:(unsigned long long)a1;
- (void)homeViewController:(id)a0 didChangeToPageIndex:(long long)a1 firstIconPageIndex:(long long)a2 minimumPageIndex:(long long)a3;

@end
