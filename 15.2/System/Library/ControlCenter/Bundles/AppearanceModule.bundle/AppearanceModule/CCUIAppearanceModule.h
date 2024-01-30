@interface CCUIAppearanceModule : CCUIToggleModule

- (BOOL)_uses24HourTime;
- (id)_timeFormatter;
- (void)_toggleStyleMode;
- (id)_subtitleForUserInterfaceStyle:(long long)a0 nextTransition:(id)a1;
- (id)glyphState;
- (double)glyphScale;
- (void)setSelected:(BOOL)a0;
- (id)init;
- (id)glyphPackageDescription;
- (void)_styleModeDidChange;
- (id)_timeStringForHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (BOOL)isSelected;
- (void)dealloc;
- (unsigned long long)_formattedHourForHour:(unsigned long long)a0;
- (void)_updateState;
- (void)_observeArbiterStyleChangeNotifications;
- (void)_unobserveArbiterStyleChangeNotifications;

@end
