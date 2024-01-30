@class NSSet;
@protocol _UIIdentifierDiffer, _UIDiffableDataSourceState;

@interface _UIDiffableSectionBoundaryMoveDetector : NSObject {
    id<_UIIdentifierDiffer> _differ;
    id<_UIDiffableDataSourceState> _beforeState;
    id<_UIDiffableDataSourceState> _afterState;
}

@property (readonly, nonatomic) NSSet *movePairs;
@property (readonly, nonatomic) BOOL didShortCircuit;

- (void).cxx_destruct;
- (id)_computeMovePairsFoundation;
- (id)_computeMovePairsSTL;
- (id)initWithItemDiffer:(id)a0 beforeDataSourceState:(id)a1 afterDataSourceState:(id)a2;

@end
