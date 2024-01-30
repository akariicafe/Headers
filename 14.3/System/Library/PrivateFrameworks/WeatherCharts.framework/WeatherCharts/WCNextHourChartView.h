@interface WCNextHourChartView : UIView {
    void /* unknown type, empty encoding */ layoutAttributesFactory;
    void /* unknown type, empty encoding */ chartViewController;
    void /* unknown type, empty encoding */ gridView;
    void /* unknown type, empty encoding */ labelsView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContext:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 minutes:(id)a2 timeZone:(id)a3 layoutDirection:(long long)a4;
- (id)initWithContext:(long long)a0 minutes:(id)a1;

@end
