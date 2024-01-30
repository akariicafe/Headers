@interface CCUIAppearanceModule : CCUIToggleModule

- (BOOL)isSelected;
- (void)_updateState;
- (void)setSelected:(BOOL)a0;
- (id)glyphPackageDescription;
- (void)_toggleStyleMode;
- (id)glyphState;
- (id)_subtitleForUserInterfaceStyle:(long long)a0 nextTransition:(id)a1;
- (id)_timeStringForHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (id)_timeFormatter;
- (double)glyphScale;
- (unsigned long long)_formattedHourForHour:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)_uses24HourTime;
- (void)_styleModeDidChange;
- (id)init;
- (void)_observeArbiterStyleChangeNotifications;
- (void)_unobserveArbiterStyleChangeNotifications;

@end
