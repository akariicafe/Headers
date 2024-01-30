@class UIActivityIndicatorView;

@interface AXUIVoiceOverBluetoothDeviceTableCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
    int _state;
}

+ (id)checkedImage;
+ (id)selectedCheckedImage;
+ (id)spacerImage;
+ (id)textForBTPairedState:(int)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)accessibilityTableViewCellText;
- (void)setChecked:(BOOL)a0;
- (void)layoutSubviews;
- (void)_updateCheckMarkIcon;
- (void)setDeviceStatePaired:(BOOL)a0 andConnected:(BOOL)a1;
- (void)setDeviceState:(int)a0;

@end
