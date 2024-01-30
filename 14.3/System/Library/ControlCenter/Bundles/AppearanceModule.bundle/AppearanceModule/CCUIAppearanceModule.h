@interface CCUIAppearanceModule : CCUIToggleModule

- (id)_timeFormatter;
- (id)glyphPackageDescription;
- (id)init;
- (id)glyphState;
- (BOOL)isSelected;
- (void)dealloc;
- (void)setSelected:(BOOL)a0;
- (void)_updateState;
- (unsigned long long)_formattedHourForHour:(unsigned long long)a0;
- (id)_timeStringForHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (void)_styleModeDidChange;
- (id)_subtitleForUserInterfaceStyle:(long long)a0 nextTransition:(id)a1;
- (BOOL)_uses24HourTime;
- (double)glyphScale;
- (void)_toggleStyleMode;
- (void)_observeArbiterStyleChangeNotifications;
- (void)_unobserveArbiterStyleChangeNotifications;

@end
