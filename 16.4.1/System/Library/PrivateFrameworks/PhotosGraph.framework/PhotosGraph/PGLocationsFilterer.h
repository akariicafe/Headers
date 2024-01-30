@class NSArray, PGIncompleteLocationResolver;

@interface PGLocationsFilterer : NSObject

@property (readonly) NSArray *sortedMomentNodes;
@property (readonly) NSArray *locationNodes;
@property (readonly) PGIncompleteLocationResolver *incompleteLocationResolver;
@property (nonatomic) unsigned long long filteringType;
@property (readonly, nonatomic) NSArray *filteredLocationNodes;

- (void).cxx_destruct;
- (id)_filteredSignificantLocationNodes;
- (id)initWithSortedMomentNodes:(id)a0 locationNodes:(id)a1 incompleteLocationResolver:(id)a2;

@end
