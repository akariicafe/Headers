@class NSString, _UILegibilitySettings;
@protocol SBFDateProviding;

@interface SBFLockScreenDateViewController : UIViewController <PTSettingsKeyObserver> {
    id _timerToken;
    BOOL _isVisible;
    id _minuteHandlerToken;
    BOOL _disablesUpdates;
}

@property (nonatomic) BOOL screenOff;
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) id<SBFDateProviding> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dateView;
- (void)_updateFormat;
- (void)_updateLegibilityStrength;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)updateTimeNow;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)willMoveToParentViewController:(id)a0;
- (void)_addObservers;
- (void)loadView;
- (void)setCustomSubtitleView:(id)a0;
- (void)_handleTimeZoneChange;
- (void)setView:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateView;
- (void)_startUpdateTimer;
- (void)dealloc;
- (void)setContentAlpha:(double)a0 withSubtitleVisible:(BOOL)a1;
- (void)_stopUpdateTimer;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)dateViewIfExists;
- (void)_updateFormatIfEnabled;
- (void)_updateState;

@end
