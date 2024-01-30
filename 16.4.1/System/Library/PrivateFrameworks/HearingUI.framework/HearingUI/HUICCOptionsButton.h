@class UILabel;

@interface HUICCOptionsButton : HUICCToggleButton

@property (retain, nonatomic) UILabel *statusLabel;

- (BOOL)enabled;
- (id)accessoryView;
- (id)accessibilityHint;
- (void).cxx_destruct;
- (void)updateValue;
- (id)contentValue;

@end
