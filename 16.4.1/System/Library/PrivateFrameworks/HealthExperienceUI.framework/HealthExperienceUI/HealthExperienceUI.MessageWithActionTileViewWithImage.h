@interface HealthExperienceUI.MessageWithActionTileViewWithImage : UIView {
    void /* unknown type, empty encoding */ baseIdentifier;
    void /* unknown type, empty encoding */ messageTileView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ messageTileViewTopConstraint;
    void /* unknown type, empty encoding */ messageTileViewLeadingConstraint;
    void /* unknown type, empty encoding */ imageViewLeadingConstraint;
    void /* unknown type, empty encoding */ configuration;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
