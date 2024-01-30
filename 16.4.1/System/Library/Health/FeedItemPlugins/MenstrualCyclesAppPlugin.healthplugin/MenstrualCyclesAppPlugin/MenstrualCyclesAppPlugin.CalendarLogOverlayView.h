@interface MenstrualCyclesAppPlugin.CalendarLogOverlayView : UICollectionReusableView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ flowToggle;
    void /* unknown type, empty encoding */ spottingToggle;
    void /* unknown type, empty encoding */ header;
    void /* unknown type, empty encoding */ separator;
    void /* unknown type, empty encoding */ height;
}

- (void)applyLayoutAttributes:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)toggleFlow;
- (void)toggleSpotting;

@end
