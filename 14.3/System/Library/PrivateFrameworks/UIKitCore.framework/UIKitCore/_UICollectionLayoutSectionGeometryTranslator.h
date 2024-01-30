@interface _UICollectionLayoutSectionGeometryTranslator : NSObject {
    struct CGSize { double width; double height; } _contentSize;
    unsigned long long _layoutAxis;
    BOOL _layoutRTL;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _supplementaryInsets;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _sectionInsets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _effectiveFrame;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } auxillaryHostContentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } effectiveContentSize;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveFrame;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForSectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 layoutAxis:(unsigned long long)a1 layoutRTL:(BOOL)a2 sectionInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a3 supplementaryInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (id)description;
- (void)_computeFrames;

@end
