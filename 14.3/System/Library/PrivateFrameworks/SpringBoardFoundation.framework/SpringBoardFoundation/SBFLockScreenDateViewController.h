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

- (void)willMoveToParentViewController:(id)a0;
- (id)dateView;
- (void)setView:(id)a0;
- (void)updateTimeNow;
- (void).cxx_destruct;
- (void)setContentAlpha:(double)a0 withSubtitleVisible:(BOOL)a1;
- (void)dealloc;
- (void)_updateLegibilityStrength;
- (id)dateViewIfExists;
- (void)_handleTimeZoneChange;
- (void)loadView;
- (void)_updateState;
- (void)_startUpdateTimer;
- (void)_addObservers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setCustomSubtitleView:(id)a0;
- (void)_stopUpdateTimer;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateView;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)_updateFormatIfEnabled;
- (void)_updateFormat;

@end
