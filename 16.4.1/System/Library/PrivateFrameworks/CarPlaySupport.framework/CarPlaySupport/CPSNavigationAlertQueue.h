@class NSString, NSTimer, CPSNavigationAlertView, CPSApplicationStateMonitor, CPNavigationAlert;
@protocol CPTemplateDelegate, CPSNavigationAlertQueueDelegate;

@interface CPSNavigationAlertQueue : NSObject <CPSButtonDelegate, CPSApplicationStateObserving>

@property (retain, nonatomic) NSTimer *alertTimer;
@property (weak, nonatomic) id<CPTemplateDelegate> templateDelegate;
@property (weak, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor;
@property (readonly, weak, nonatomic) id<CPSNavigationAlertQueueDelegate> delegate;
@property (readonly, nonatomic) CPNavigationAlert *currentAlert;
@property (readonly, nonatomic) CPSNavigationAlertView *currentAlertView;
@property (readonly, nonatomic) BOOL isDisplayingAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didSelectButton:(id)a0;
- (BOOL)_canBeginAnimatingAlert;
- (void)_clearAlertViewIfNecessaryForDismissedAlertView:(id)a0;
- (void)_startAlertAnimations;
- (void)_visibleAlertTimerFired:(id)a0;
- (void)applicationStateMonitor:(id)a0 didBecomeActive:(BOOL)a1;
- (void)beginAnimatingAlertIfPossible;
- (void)dismissCurrentNavigationAlertAnimated:(BOOL)a0 context:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)initWithDelegate:(id)a0 applicationStateMonitor:(id)a1;
- (void)prepareNavigationAlert:(id)a0 templateDelegate:(id)a1 animated:(BOOL)a2;

@end
