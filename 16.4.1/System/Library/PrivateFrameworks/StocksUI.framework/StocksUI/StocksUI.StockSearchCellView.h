@class NSString, NSArray;

@interface StocksUI.StockSearchCellView : UIView {
    void /* unknown type, empty encoding */ symbolLabel;
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ exchangeLabel;
    void /* unknown type, empty encoding */ priceLabel;
    void /* unknown type, empty encoding */ priceChangeLabel;
    void /* unknown type, empty encoding */ watchlistSelectionButton;
    void /* unknown type, empty encoding */ isSelectable;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ isHighlightable;
    void /* unknown type, empty encoding */ isHighlighted;
}

@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;

- (BOOL)accessibilityActivate;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
