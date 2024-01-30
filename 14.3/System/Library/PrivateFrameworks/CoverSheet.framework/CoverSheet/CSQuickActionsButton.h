@class _UILegibilitySettings;

@interface CSQuickActionsButton : UICoverSheetButton

@property (nonatomic) long long type;
@property (nonatomic) BOOL permitted;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (void)_updateStyle;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithType:(long long)a0;
- (id)_buttonImageNameForSelected:(BOOL)a0;
- (id)_imageWithName:(id)a0;
- (id)_accessoryTitleForType;
- (id)_statisticsIdentifierForType;

@end
