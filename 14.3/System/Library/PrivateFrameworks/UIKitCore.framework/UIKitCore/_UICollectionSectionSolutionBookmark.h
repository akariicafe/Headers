@class NSCollectionLayoutSection, _UICollectionPreferredSizes;
@protocol _UICollectionLayoutSectionSolver, _UIContentInsetsEnvironment;

@interface _UICollectionSectionSolutionBookmark : NSObject

@property (readonly, nonatomic) id<_UICollectionLayoutSectionSolver> solution;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } globalFrame;
@property (readonly, nonatomic) id<_UIContentInsetsEnvironment> insetEnvironment;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } orthogonalContentLayoutFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orthogonalContentSize;
@property (readonly, nonatomic) NSCollectionLayoutSection *section;
@property (readonly, nonatomic) _UICollectionPreferredSizes *preferredSizes;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentInsetsOffset;

- (void).cxx_destruct;
- (id)initWithSolution:(id)a0 globalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 insetEnvironment:(id)a2 contentSize:(struct CGSize { double x0; double x1; })a3 section:(id)a4 preferredSizes:(id)a5;
- (id)copyWithGlobalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;

@end
