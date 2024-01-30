@class NSString;

@interface StocksUI.StockView : UIView <TSAXCustomReorderMessaging> {
    void /* unknown type, empty encoding */ symbolLabel;
    void /* unknown type, empty encoding */ companyLabel;
    void /* unknown type, empty encoding */ companyLabelLong;
    void /* unknown type, empty encoding */ exchangeLabel;
    void /* unknown type, empty encoding */ priceLabel;
    void /* unknown type, empty encoding */ priceChangeButton;
    void /* unknown type, empty encoding */ sparklineView;
    void /* unknown type, empty encoding */ axElement;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ revision;
    void /* unknown type, empty encoding */ isEditing;
    void /* unknown type, empty encoding */ makeAccessibilityCustomActions;
    void /* unknown type, empty encoding */ accessibilityPriceString;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) NSString *tsaxAccessibilityLabelForReordering;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
