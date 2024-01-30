@class NSString;

@interface StocksUI.DateRangePickerView : UIScrollView {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ segmentedControl;
    void /* unknown type, empty encoding */ onChange;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;

- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityActivate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
