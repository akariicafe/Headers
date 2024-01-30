@interface MenstrualCyclesAppPlugin.CalendarViewLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ numberOfDaysPerWeek;
    void /* unknown type, empty encoding */ overlayAttributes;
    void /* unknown type, empty encoding */ overlayFrame;
}

@property (class, nonatomic, readonly) Class layoutAttributesClass;

- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
