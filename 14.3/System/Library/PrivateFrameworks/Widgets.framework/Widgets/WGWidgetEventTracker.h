@class NSMutableDictionary, PETDistributionEventTracker, NSDateComponents, NSDate, PETScalarEventTracker;

@interface WGWidgetEventTracker : NSObject {
    NSDateComponents *_previousTodayViewAppearDateComponents;
    NSDate *_previousTodayViewAppearanceDate;
    NSMutableDictionary *_previousWidgetAppearanceDateByIdentifier;
    unsigned long long _location;
    PETDistributionEventTracker *_widgetLingerTracker;
    PETScalarEventTracker *_widgetShownTracker;
    PETScalarEventTracker *_widgetStatusTracker;
    PETDistributionEventTracker *_widgetListLingerTracker;
    PETScalarEventTracker *_widgetToggleContractTracker;
    PETScalarEventTracker *_widgetToggleExpandTracker;
    PETScalarEventTracker *_widgetListShownTracker;
    PETScalarEventTracker *_widgetToggleContract;
    PETScalarEventTracker *_widgetToggleExpand;
    BOOL _authenticated;
}

+ (id)sharedInstance;

- (id)_statusProperty;
- (id)_widgetListLingerTracker;
- (id)init;
- (void).cxx_destruct;
- (void)_trackWidgetExpandEventForWidget:(id)a0;
- (void)widgetListDidAppearAtLocation:(unsigned long long)a0 withEnabledWidgets:(id)a1 disabledWidgets:(id)a2;
- (void)dealloc;
- (id)_widgetToggleContractTracker;
- (void)widgetViewDidDisappearWithWidget:(id)a0;
- (id)widgetToggleExpandTracker;
- (void)_trackWidgetListLingerEventWithLocation:(unsigned long long)a0 authenticated:(BOOL)a1 duration:(double)a2;
- (void)widget:(id)a0 didDisappearInMode:(long long)a1;
- (void)widget:(id)a0 didChangeUserSpecifiedDisplayMode:(long long)a1;
- (id)_widgetShownTracker;
- (id)_widgetStatusTracker;
- (void)widget:(id)a0 didAppearInMode:(long long)a1;
- (void)_trackWidgetListShownEventWithLocation:(unsigned long long)a0 authenticated:(BOOL)a1;
- (void)_lockedStateDidChange;
- (void)_trackWidgetLingerEventForWidget:(id)a0 withLocation:(unsigned long long)a1 authenticated:(BOOL)a2 mode:(long long)a3 duration:(double)a4;
- (void)widgetViewDidAppearWithWidget:(id)a0;
- (id)widgetListShownTracker;
- (void)_trackWidgetShownEventForWidget:(id)a0 withLocation:(unsigned long long)a1 authenticated:(BOOL)a2 mode:(long long)a3;
- (void)widgetListDidDisappearAtLocation:(unsigned long long)a0;
- (void)_trackWidgetStatusEventForWidget:(id)a0 withStatus:(BOOL)a1;
- (id)_modeProperty;
- (id)_locationProperty;
- (id)_authenticationProperty;
- (void)_trackWidgetContractEventForWidget:(id)a0;
- (id)_widgetLingerTracker;
- (id)_widgetProperty;

@end
