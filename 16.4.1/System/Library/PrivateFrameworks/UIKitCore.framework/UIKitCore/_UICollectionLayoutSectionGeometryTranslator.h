@interface _UICollectionLayoutSectionGeometryTranslator : NSObject {
    unsigned long long _layoutAxis;
    BOOL _layoutRTL;
    struct CGPoint { double x; double y; } _contentFrameOffset;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _sectionInsets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _effectiveFrame;
    struct CGSize { double width; double height; } _primaryContentSize;
    struct CGSize { double width; double height; } _contentSizeIncludingSupplementaries;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _primaryContentFrame;
}

- (id)description;

@end
