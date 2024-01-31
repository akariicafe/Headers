@interface CCUIAppearanceModule : CCUIToggleModule

- (id)init;
- (void)_toggleStyleMode;
- (void)dealloc;
- (id)_subtitleForUserInterfaceStyle:(long long)a0 nextTransition:(id)a1;
- (BOOL)isSelected;
- (double)glyphScale;
- (void)_updateState;
- (id)glyphPackageDescription;
- (id)_timeStringForHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (id)_timeFormatter;
- (BOOL)_uses24HourTime;
- (unsigned long long)_formattedHourForHour:(unsigned long long)a0;
- (void)_styleModeDidChange;
- (id)glyphState;
- (void)setSelected:(BOOL)a0;
- (void)_observeArbiterStyleChangeNotifications;
- (void)_unobserveArbiterStyleChangeNotifications;

@end
