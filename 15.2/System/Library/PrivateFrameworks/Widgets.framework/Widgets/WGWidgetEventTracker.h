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

- (void)widget:(id)a0 didChangeUserSpecifiedDisplayMode:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)widgetViewDidAppearWithWidget:(id)a0;
- (void)widgetViewDidDisappearWithWidget:(id)a0;
- (void)widget:(id)a0 didAppearInMode:(long long)a1;
- (void)widget:(id)a0 didDisappearInMode:(long long)a1;
- (void)_lockedStateDidChange;
- (void)_trackWidgetStatusEventForWidget:(id)a0 withStatus:(BOOL)a1;
- (void)_trackWidgetListShownEventWithLocation:(unsigned long long)a0 authenticated:(BOOL)a1;
- (void)_trackWidgetListLingerEventWithLocation:(unsigned long long)a0 authenticated:(BOOL)a1 duration:(double)a2;
- (void)_trackWidgetShownEventForWidget:(id)a0 withLocation:(unsigned long long)a1 authenticated:(BOOL)a2 mode:(long long)a3;
- (void)_trackWidgetLingerEventForWidget:(id)a0 withLocation:(unsigned long long)a1 authenticated:(BOOL)a2 mode:(long long)a3 duration:(double)a4;
- (void)_trackWidgetContractEventForWidget:(id)a0;
- (void)_trackWidgetExpandEventForWidget:(id)a0;
- (id)_widgetProperty;
- (id)_locationProperty;
- (id)_authenticationProperty;
- (id)_modeProperty;
- (id)_widgetLingerTracker;
- (id)_widgetShownTracker;
- (id)_statusProperty;
- (id)_widgetStatusTracker;
- (id)_widgetToggleContractTracker;
- (id)widgetToggleExpandTracker;
- (id)_widgetListLingerTracker;
- (id)widgetListShownTracker;
- (void)widgetListDidAppearAtLocation:(unsigned long long)a0 withEnabledWidgets:(id)a1 disabledWidgets:(id)a2;
- (void)widgetListDidDisappearAtLocation:(unsigned long long)a0;

@end
