@interface MobilityAppPlugin.FitnessPlusCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ $__lazy_storage_$_highlightedImageOverlay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_highlightedSashUnderlay;
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fitnessPlusHeroImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_categoryTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_categoryDescriptionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_linkToFitnessButton;
}

@property (nonatomic) BOOL highlighted;

- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)linkButtonPressed;

@end
