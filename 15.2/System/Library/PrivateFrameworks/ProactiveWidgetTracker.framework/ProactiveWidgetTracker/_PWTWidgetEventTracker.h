@class NSString, PETGoalConversionEventTracker, PETScalarEventTracker, PETDistributionEventTracker, NSObject;
@protocol OS_dispatch_queue;

@interface _PWTWidgetEventTracker : NSObject {
    PETScalarEventTracker *_resizeTracker;
    PETGoalConversionEventTracker *_conversionTracker;
    PETScalarEventTracker *_updateTracker;
    PETDistributionEventTracker *_screenLingerTracker;
    PETScalarEventTracker *_foregroundingTracker;
    BOOL _hasReceivedActiveDisplayModeChangeNotificationOnce;
    BOOL _isCurrentlyVisible;
    BOOL _willBecomeVisible;
    BOOL _didBecomeVisibleWhileLocked;
    BOOL _widgetIsForeground;
    BOOL _widgetWasEverForeground;
    long long _activeDisplayMode;
    double _lastAppearTime;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)widgetActiveDisplayModeDidChange:(long long)a0 withMaximumSize:(struct CGSize { double x0; double x1; })a1;
- (void)widgetDidBecomeForeground:(BOOL)a0;
- (void)widgetWillAppear;
- (void)widgetDidAppear;
- (void)widgetWillDisappear;
- (void)widgetDidDisappear;
- (void)widgetPerformedUpdateWithResult:(unsigned long long)a0;
- (void)userEngagedWithWidget;

@end
