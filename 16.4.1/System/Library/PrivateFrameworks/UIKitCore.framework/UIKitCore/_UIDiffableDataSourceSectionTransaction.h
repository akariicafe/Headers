@class NSOrderedCollectionDifference, NSDiffableDataSourceSectionSnapshot;

@interface _UIDiffableDataSourceSectionTransaction : NSObject

@property (readonly, nonatomic) id sectionIdentifier;
@property (readonly, nonatomic) NSDiffableDataSourceSectionSnapshot *initialSnapshot;
@property (readonly, nonatomic) NSDiffableDataSourceSectionSnapshot *finalSnapshot;
@property (readonly, nonatomic) NSOrderedCollectionDifference *difference;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSectionIdentifier:(id)a0 initialSnapshot:(id)a1 finalSnapshot:(id)a2 difference:(id)a3;

@end
