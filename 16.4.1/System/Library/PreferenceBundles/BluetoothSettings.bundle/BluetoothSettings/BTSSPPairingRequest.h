@class UIAlertController, BluetoothDevice, PSSpecifier;

@interface BTSSPPairingRequest : NSObject {
    BluetoothDevice *_device;
    PSSpecifier *_specifier;
    UIAlertController *_alert;
    id _delegate;
    int _pairingStyle;
}

- (void)dismiss;
- (void)show;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)acceptSSP:(long long)a0;
- (void)hidPairingResult:(id)a0;
- (id)initWithDevice:(id)a0 andSpecifier:(id)a1;
- (int)pairingStyle;
- (void)setPairingStyle:(int)a0 andPasskey:(id)a1;
- (BOOL)hasLimitedSupportForHID;
- (id)sanitizeNameForAlert:(id)a0;

@end
