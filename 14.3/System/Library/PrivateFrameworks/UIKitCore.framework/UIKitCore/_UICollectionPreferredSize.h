@class _UICollectionPreferredSizingCustomizations, NSCollectionLayoutSize;

@interface _UICollectionPreferredSize : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } originalSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fittingSize;
@property (readonly, nonatomic) NSCollectionLayoutSize *layoutSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (readonly, nonatomic) _UICollectionPreferredSizingCustomizations *customizations;

- (void).cxx_destruct;
- (id)initWithOriginalSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1 layoutSize:(id)a2 customizations:(id)a3;
- (id)description;
- (id)initWithOriginalSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1 layoutSize:(id)a2;

@end
