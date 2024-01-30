@class NSCollectionLayoutSection, _UICollectionPreferredSizes, _UICompositionalLayoutSolverSectionContainerDescriptor;
@protocol _UICollectionLayoutSectionSolver, _UIContentInsetsEnvironment;

@interface _UICollectionSectionSolutionBookmark : NSObject {
    id<_UICollectionLayoutSectionSolver> _solution;
    NSCollectionLayoutSection *_section;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _globalFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _globalPinningFrame;
    id<_UIContentInsetsEnvironment> _insetEnvironment;
    id<_UIContentInsetsEnvironment> _supplementaryInsetEnvironment;
    struct CGSize { double width; double height; } _contentSize;
    _UICollectionPreferredSizes *_preferredSizes;
    _UICompositionalLayoutSolverSectionContainerDescriptor *_memoizedContainerDescriptor;
}

- (id)description;
- (void).cxx_destruct;

@end
