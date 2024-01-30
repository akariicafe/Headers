@class NSArray, _UIDataSourceSnapshotter;
@protocol _UICollectionViewUpdateTranslating;

@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleBounds;
@property (readonly, nonatomic) NSArray *updateItems;
@property (readonly, nonatomic) id<_UICollectionViewUpdateTranslating> updateTranslator;
@property (readonly, nonatomic) _UIDataSourceSnapshotter *finalDataSourceSnapshot;

+ (id)solverUpdateForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateItems:(id)a1 updateTranslator:(id)a2 finalDataSourceSnapshot:(id)a3;

- (void).cxx_destruct;
- (id)initWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateItems:(id)a1 updateTranslator:(id)a2 finalDataSourceSnapshot:(id)a3;

@end
