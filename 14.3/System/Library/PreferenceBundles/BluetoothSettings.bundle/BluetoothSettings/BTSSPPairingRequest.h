@class UIAlertController, BluetoothDevice, PSSpecifier;

@interface BTSSPPairingRequest : NSObject {
    BluetoothDevice *_device;
    PSSpecifier *_specifier;
    UIAlertController *_alert;
    id _delegate;
    int _pairingStyle;
}

- (void)show;
- (id)initWithDevice:(id)a0 andSpecifier:(id)a1;
- (void)setPairingStyle:(int)a0 andPasskey:(id)a1;
- (int)pairingStyle;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)dismiss;
- (void)hidPairingResult:(id)a0;
- (id)sanitizeNameForAlert:(id)a0;
- (BOOL)hasLimitedSupportForHID;
- (void)acceptSSP:(long long)a0;

@end
