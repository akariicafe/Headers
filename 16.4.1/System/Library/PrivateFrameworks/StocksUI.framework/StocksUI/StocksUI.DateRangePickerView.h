@class NSString;

@interface StocksUI.DateRangePickerView : UIScrollView {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ segmentedControl;
    void /* unknown type, empty encoding */ onChange;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;

- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)accessibilityActivate;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
