@class NSString;

@interface _UICollectionViewLayoutOrthogonalScrollingSectionState : NSObject <_UICollectionViewLayoutOrthogonalScrollingSectionState, NSCopying>

@property (readonly, nonatomic) unsigned long long orthogonalLayoutAxis;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } orthogonalContentOffset;
@property (readonly, nonatomic) unsigned long long layoutAxis;
@property (readonly, nonatomic) double pagingDimension;
@property (readonly, nonatomic) double groupDimension;
@property (readonly, nonatomic) double interPageDimension;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } environmentInsets;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
