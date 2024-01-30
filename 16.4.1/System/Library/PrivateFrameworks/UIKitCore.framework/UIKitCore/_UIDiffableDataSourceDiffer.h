@class NSArray, NSIndexSet, NSHashTable, _UIIdentifierDiffer;
@protocol _UIDiffableDataSourceState;

@interface _UIDiffableDataSourceDiffer : NSObject <_UIDiffableDataSourceDiffer>

@property (retain, nonatomic) id<_UIDiffableDataSourceState> beforeDataSourceState;
@property (retain, nonatomic) id<_UIDiffableDataSourceState> afterDataSourceState;
@property (retain, nonatomic) NSArray *updates;
@property (retain, nonatomic) _UIIdentifierDiffer *itemIdentifierDiffer;
@property (retain, nonatomic) _UIIdentifierDiffer *sectionIdentifierDiffer;
@property (retain, nonatomic) NSIndexSet *deletedSections;
@property (retain, nonatomic) NSIndexSet *insertedSections;
@property (retain, nonatomic) NSHashTable *affectedSectionIdentifiers;
@property (readonly, nonatomic) BOOL hasDifferences;
@property (readonly, nonatomic) BOOL snapshotsAreRelated;

+ (id)differWithBeforeDataSourceState:(id)a0 afterDataSourceState:(id)a1;
+ (id)differWithBeforeDataSourceState:(id)a0 afterDataSourceState:(id)a1 itemIdentifierDiffer:(id)a2;

- (id)_itemUpdatesForDiffResults:(id)a0 sectionBoundaryMoves:(id)a1 deletedSections:(id)a2 insertedSections:(id)a3;
- (id)initWithBeforeDataSource:(id)a0 afterDataSource:(id)a1 itemIdentifierDiffer:(id)a2;
- (id)_sectionUpdatesForDiffResults:(id)a0 deletedSections:(id)a1 insertedSections:(id)a2;
- (id)_computeUpdatesForIdentifierBasedDiff;
- (BOOL)_verifyForUpdates:(id)a0;
- (void)_computeUpdates;
- (id)_computeSectionBoundaryMovesForItemDiffer:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
