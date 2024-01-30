@class USBSetupView, WiFiSetupView, BluetoothSetupView;

@interface TetheringSetupView : UIView <PSHeaderFooterView> {
    BOOL _showWifiView;
    WiFiSetupView *_wifiView;
    BluetoothSetupView *_btView;
    USBSetupView *_usbView;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 inTableView:(id)a1 shouldSetSize:(BOOL)a2;

@end
