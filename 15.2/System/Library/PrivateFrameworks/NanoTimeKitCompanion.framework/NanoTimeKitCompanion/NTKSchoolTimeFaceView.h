@class CLKClockTimerToken, NTKDigitalTimeLabel, NTKCurvedColoringLabel, CLKClockTimer, NTKSchoolTimeDialView, NSDateFormatter, UILabel, NTKAnalogHandsView;

@interface NTKSchoolTimeFaceView : NTKFaceView {
    NTKSchoolTimeDialView *_dialView;
    NTKAnalogHandsView *_handsView;
    NTKDigitalTimeLabel *_digitalTimeLabel;
    UILabel *_dateLabel;
    UILabel *_nameLabel;
    NTKCurvedColoringLabel *_curvedNameLabel;
    CLKClockTimer *_clockTimer;
    CLKClockTimerToken *_clockTimerToken;
    NSDateFormatter *_formatter;
}

+ (id)schoolTimeColor;
+ (id)secondHandColor;

- (void)_setupNotifications;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)dealloc;
- (void)_startObserving;
- (void)_setDate:(id)a0;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_setupNameLabel;
- (void)_updateTimeAndDate:(id)a0 animated:(BOOL)a1;
- (void)_layoutCurvedNameLabel;
- (void)_timeDidUpdate:(id)a0;
- (void)_handleChangeNotification;
- (void)_tearDownUI;

@end
