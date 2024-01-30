@class UIButton, UIView;
@protocol TVRUIStyleProvider;

@interface TVRMessageView : UIView

@property (retain, nonatomic) UIView *currentView;
@property (nonatomic) unsigned long long messageType;
@property (retain, nonatomic) UIButton *turnOnWiFiButton;
@property (nonatomic, getter=isWifiConnectInProgress) BOOL wifiConnectInProgress;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)clearContent;
- (void).cxx_destruct;
- (id)_convertToAttributedStringWithReplacement:(id)a0 imagePointSize:(double)a1;
- (id)_deviceTypeString;
- (BOOL)_largeAccessibilityFontSizesEnabled;
- (id)_loadingViewWithTitle:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)_localizedLegacyPairingMessageForDeviceModel;
- (void)_turnOnWireless:(id)a0;
- (void)showLoadingSpinner;
- (void)showMessageWithError:(id)a0 device:(id)a1;
- (void)showMessageWithTitle:(id)a0 message:(id)a1;
- (void)showMessageWithTitle:(id)a0 message:(id)a1 titleFont:(id)a2;
- (void)showNoAssociatedNetworkMessage;
- (void)showNoWIFIConnectionMessage;
- (void)showPairingMessageWithCode:(id)a0;
- (void)showSearchingSpinner;

@end
