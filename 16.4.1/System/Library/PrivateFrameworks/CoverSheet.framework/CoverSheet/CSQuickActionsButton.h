@class _UILegibilitySettings;

@interface CSQuickActionsButton : UICoverSheetButton

@property (nonatomic) long long type;
@property (nonatomic) BOOL permitted;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)_imageWithName:(id)a0;
- (void)_updateStyle;
- (void)setSelected:(BOOL)a0;
- (id)initWithType:(long long)a0;
- (id)_statisticsIdentifierForType;
- (id)_accessoryTitleForType;
- (id)_buttonImageNameForSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
