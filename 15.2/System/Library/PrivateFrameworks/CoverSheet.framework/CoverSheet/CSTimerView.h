@class NSString, NSDate;

@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver> {
    NSDate *_endDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFont:(id)a0;
- (void)_updateLegibilityStrength;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)setEndDate:(id)a0;
- (id)accessoryView;
- (double)interItemSpacing;
- (void)setLegibilitySettings:(id)a0;
- (void).cxx_destruct;
- (id)_newTimerDialForSettings:(id)a0 withFont:(id)a1;
- (id)init;
- (void)updateTimerLabel;
- (id)_timerFont;
- (void)dealloc;

@end
