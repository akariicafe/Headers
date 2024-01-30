@class NTKFaceView, NTKOlympusTimeView, NSDate, CLKClockTimerToken;

@interface NTKOlympusController : NSObject

@property (retain, nonatomic) CLKClockTimerToken *clockTimerToken;
@property (weak, nonatomic) NTKFaceView *faceView;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) unsigned long long second;
@property (weak, nonatomic) NTKOlympusTimeView *olympusView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleSignificantTimeChanged;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (BOOL)_hasWindrunnerWedge;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_animateClockHandsFromDate:(id)a0 toDate:(id)a1 duration:(double)a2;
- (void)_updateHourComponentsWithDate:(id)a0;
- (void)_applyWindrunnerMask;
- (void)_updateTimeComponentsWithDate:(id)a0 hour:(long long)a1 minute:(long long)a2 second:(long long)a3;
- (id)initWithFaceView:(id)a0 olympusView:(id)a1;
- (void)applyDataMode:(long long)a0;

@end
