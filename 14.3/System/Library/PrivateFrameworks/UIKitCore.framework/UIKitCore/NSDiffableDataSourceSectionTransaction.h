@class NSOrderedCollectionDifference, NSDiffableDataSourceSectionSnapshot;

@interface NSDiffableDataSourceSectionTransaction : NSObject

@property (readonly, nonatomic) id sectionIdentifier;
@property (readonly, nonatomic) NSDiffableDataSourceSectionSnapshot *initialSnapshot;
@property (readonly, nonatomic) NSDiffableDataSourceSectionSnapshot *finalSnapshot;
@property (readonly, nonatomic) NSOrderedCollectionDifference *difference;

- (id)initWithSectionIdentifier:(id)a0 initialSnapshot:(id)a1 finalSnapshot:(id)a2 difference:(id)a3;
- (void).cxx_destruct;
- (id)_spiCopy;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
