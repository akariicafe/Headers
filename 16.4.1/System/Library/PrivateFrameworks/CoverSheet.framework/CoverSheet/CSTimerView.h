@class NSString, NSDate;

@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver> {
    NSDate *_endDate;
}

@property (readonly, nonatomic) NSString *timerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessoryView;
- (void)setFont:(id)a0;
- (void)setLegibilitySettings:(id)a0;
- (id)_newTimerDialForSettings:(id)a0 withFont:(id)a1;
- (id)_timerFont;
- (void)_updateLegibilityStrength;
- (void)setEndDate:(id)a0;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)updateTimerLabel;
- (double)interItemSpacing;

@end
