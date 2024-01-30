@interface MenstrualCyclesAppPlugin.CalendarViewLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ numberOfDaysPerWeek;
    void /* unknown type, empty encoding */ overlayAttributes;
    void /* unknown type, empty encoding */ overlayFrame;
}

@property (class, nonatomic, readonly) Class layoutAttributesClass;

- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
