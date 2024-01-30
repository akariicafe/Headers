@interface _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout : UICollectionViewFlowLayout {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameForDoneButton;
    double _rightMarginForDoneButton;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameForDoneButton;
@property (nonatomic) double rightMarginForDoneButton;

+ (Class)layoutAttributesClass;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;

@end
