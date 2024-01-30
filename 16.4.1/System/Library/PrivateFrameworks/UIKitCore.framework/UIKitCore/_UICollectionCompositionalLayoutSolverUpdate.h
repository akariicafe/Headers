@class NSArray, _UIDataSourceSnapshotter;
@protocol _UICollectionViewUpdateTranslating;

@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject {
    NSArray *_updateItems;
    id<_UICollectionViewUpdateTranslating> _updateTranslator;
    _UIDataSourceSnapshotter *_finalDataSourceSnapshot;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
}

- (void).cxx_destruct;

@end
