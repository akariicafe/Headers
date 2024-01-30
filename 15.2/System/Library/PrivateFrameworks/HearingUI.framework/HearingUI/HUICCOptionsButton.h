@class UILabel;

@interface HUICCOptionsButton : HUICCToggleButton

@property (retain, nonatomic) UILabel *statusLabel;

- (BOOL)enabled;
- (id)accessoryView;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (void)updateValue;
- (id)contentValue;

@end
