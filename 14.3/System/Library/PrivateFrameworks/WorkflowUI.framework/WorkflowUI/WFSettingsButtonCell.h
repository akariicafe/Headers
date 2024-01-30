@interface WFSettingsButtonCell : WFSettingsCell

@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)tintColorDidChange;
- (id)disabledTintColor;

@end
