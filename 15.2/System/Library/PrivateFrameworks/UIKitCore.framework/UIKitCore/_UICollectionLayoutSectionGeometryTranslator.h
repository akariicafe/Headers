@interface _UICollectionLayoutSectionGeometryTranslator : NSObject {
    struct CGSize { double width; double height; } _contentSize;
    unsigned long long _layoutAxis;
    BOOL _layoutRTL;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _supplementaryInsets;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _sectionInsets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _effectiveFrame;
}

- (id)description;

@end
