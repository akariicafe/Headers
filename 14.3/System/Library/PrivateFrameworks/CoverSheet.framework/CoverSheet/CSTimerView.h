@class NSString, NSDate;

@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver> {
    NSDate *_endDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessoryView;
- (void)setLegibilitySettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setFont:(id)a0;
- (void)_updateLegibilityStrength;
- (double)interItemSpacing;
- (void)setEndDate:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)_timerFont;
- (id)_newTimerDialForSettings:(id)a0 withFont:(id)a1;
- (void)updateTimerLabel;

@end
