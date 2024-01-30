@class NSArray;

@interface GameCenterUI.PlayerProfileInfoBarView : UIView {
    void /* unknown type, empty encoding */ centerContentInScrollView;
    void /* unknown type, empty encoding */ infoItemPairs;
    void /* unknown type, empty encoding */ separators;
    void /* unknown type, empty encoding */ scrollView;
}

@property (nonatomic, readonly) NSArray *accessibilityInfoItemPairs;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
