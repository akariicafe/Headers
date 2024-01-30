@interface GameCenterUI.FocusableTitledAppIconView : GKFocusHighlightingCollectionViewCell {
    void /* unknown type, empty encoding */ embeddedView;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
