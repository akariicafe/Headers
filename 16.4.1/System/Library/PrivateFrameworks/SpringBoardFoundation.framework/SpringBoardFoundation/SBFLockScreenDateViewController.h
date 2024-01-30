@class _UILegibilitySettings, NSString, SBAlwaysOnDefaults, CSProminentDisplayViewController, UIViewController;
@protocol BSDefaultObserver, SBFDateProviding;

@interface SBFLockScreenDateViewController : UIViewController <PTSettingsKeyObserver> {
    id _timerToken;
    BOOL _isVisible;
    id _minuteHandlerToken;
    BOOL _disablesUpdates;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
    id<BSDefaultObserver> _alwaysOnDefaultsObserver;
    CSProminentDisplayViewController *_prominentDisplayViewController;
}

@property (nonatomic) double backgroundAlpha;
@property (retain, nonatomic) UIViewController *inlineComplicationViewController;
@property (retain, nonatomic) UIViewController *complicationContainerViewController;
@property (nonatomic) BOOL screenOff;
@property (nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled;
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (nonatomic) BOOL shouldApplyVibrancyToComplications;
@property (nonatomic) BOOL restrictsVibrancy;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) id<SBFDateProviding> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dateView;
- (void)setTimeAlpha:(double)a0 subtitleAlpha:(double)a1;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)willMoveToParentViewController:(id)a0;
- (void)_updateWithFrameSpecifier:(id)a0;
- (id)_timelinesForDateInterval:(id)a0;
- (void)setCustomSubtitle:(id)a0;
- (void)_updateAlternateCalendar;
- (void)_updateState;
- (void)setCustomSubtitleView:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setDateTimeAlignment:(long long)a0;
- (void)updateTimerWithText:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_addObservers;
- (void)_handleTimeZoneChange;
- (void)_updateFormatIfEnabled;
- (void)setView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_startUpdateTimer;
- (void)_updateLegibilityStrength;
- (id)dateViewIfExists;
- (void)setCustomSubtitle:(id)a0 withTimeout:(double)a1;
- (void)_updateFormat;
- (void)updateTimeNow;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)setTimerWithText:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_stopUpdateTimer;
- (void)_updateView;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end
