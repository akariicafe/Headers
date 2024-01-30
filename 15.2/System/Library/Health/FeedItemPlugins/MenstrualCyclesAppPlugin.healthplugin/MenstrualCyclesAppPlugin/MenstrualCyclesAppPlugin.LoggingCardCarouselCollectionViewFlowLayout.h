@interface MenstrualCyclesAppPlugin.LoggingCardCarouselCollectionViewFlowLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ scaleFactor;
    void /* unknown type, empty encoding */ scaleAlphaFactor;
    void /* unknown type, empty encoding */ xScaleFactor;
    void /* unknown type, empty encoding */ configuration;
}

@property (class, nonatomic, readonly) Class layoutAttributesClass;

@property (nonatomic, readonly) BOOL flipsHorizontallyInOppositeLayoutDirection;

- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
