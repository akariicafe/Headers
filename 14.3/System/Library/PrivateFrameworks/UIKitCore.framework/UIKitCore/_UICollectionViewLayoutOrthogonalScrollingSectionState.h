@class NSString;

@interface _UICollectionViewLayoutOrthogonalScrollingSectionState : NSObject <_UICollectionViewLayoutOrthogonalScrollingSectionState, NSCopying>

@property (readonly, nonatomic) unsigned long long orthogonalLayoutAxis;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } orthogonalContentOffset;
@property (readonly, nonatomic) unsigned long long layoutAxis;
@property (readonly, nonatomic) double pagingDimension;
@property (readonly, nonatomic) double groupDimension;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orthogonalScrollingSectionStateFromCompositionalLayoutSolver:(id)a0 section:(long long)a1;

- (id)initWithOrthogonalLayoutAxis:(unsigned long long)a0 layoutAxis:(unsigned long long)a1 pagingDimension:(double)a2 groupDimension:(double)a3 layoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 contentSize:(struct CGSize { double x0; double x1; })a5 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a6 orthogonalContentOffset:(struct CGPoint { double x0; double x1; })a7;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
