@class NSArray;

@interface VideosUI.MultiPlayerDistributionPicker : UIView {
    void /* unknown type, empty encoding */ featuredDistributionSymbol;
    void /* unknown type, empty encoding */ distribution;
    void /* unknown type, empty encoding */ $__lazy_storage_$_featuredDistributionButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_equalDistributionButton;
    void /* unknown type, empty encoding */ onDistributionChange;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)featuredPressed;
- (void)equalPressed;

@end
