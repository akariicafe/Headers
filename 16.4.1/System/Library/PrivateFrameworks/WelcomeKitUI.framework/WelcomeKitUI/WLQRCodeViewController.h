@class WLQRCode;

@interface WLQRCodeViewController : WLQRCodeController {
    BOOL _initialized;
}

@property (retain, nonatomic) WLQRCode *qrcode;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)initQRCode;

@end
