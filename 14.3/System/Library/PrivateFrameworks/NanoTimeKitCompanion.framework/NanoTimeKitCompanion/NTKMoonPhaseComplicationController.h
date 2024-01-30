@class NSString, NSTimer, CLLocation, NSDate;
@protocol NTKMoonPhaseComplicationDisplay;

@interface NTKMoonPhaseComplicationController : NTKComplicationController <NTKTimeTravel> {
    NSDate *_timeTravelDate;
    struct { unsigned char wantsPhaseName : 1; unsigned char wantsPhaseNumber : 1; unsigned char wantsEventAndDate : 1; unsigned char wantsLocked : 1; unsigned char wantsPaused : 1; } _displayFlags;
    NSTimer *_afterEventTimer;
    BOOL _paused;
    BOOL _missedUpdateWhilePaused;
}

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) CLLocation *location;
@property (readonly, weak, nonatomic) id<NTKMoonPhaseComplicationDisplay> legacyDisplay;

+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (void)_deactivate;
- (void).cxx_destruct;
- (void)_activate;
- (void)_updateDisplay;
- (BOOL)hasTapAction;
- (void)performTapAction;
- (void)setShowsLockedUI:(BOOL)a0;
- (void)setDataMode:(long long)a0 forDisplayWrapper:(id)a1;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)_configureForLegacyDisplay:(id)a0;
- (void)_asyncUpdateDisplay;
- (void)_updateDisplayForced:(BOOL)a0;
- (void)_invalidateEventTimer;
- (void)_afterEventTimerFired:(id)a0;
- (void)_scheduleAfterEventTimer:(id)a0;

@end
