@interface _UICollectionLayoutExtendedAttributesQueryInfo : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } queryRect;
@property (readonly, nonatomic) BOOL isOrthoSection;
@property (readonly, nonatomic) long long sectionIndex;

- (id)description;
- (id)initWithQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sectionIndex:(long long)a1;

@end
