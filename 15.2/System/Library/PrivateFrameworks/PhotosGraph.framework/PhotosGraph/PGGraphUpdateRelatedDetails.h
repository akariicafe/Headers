@class NSSet, NSMutableSet;

@interface PGGraphUpdateRelatedDetails : NSObject

@property (retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
@property (retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
@property (readonly, nonatomic) NSSet *identifiersForMomentRelatedToUpdatedPersons;
@property (readonly, nonatomic) NSSet *identifiersForMomentRelatedToDeletedPersons;

- (void).cxx_destruct;
- (id)init;
- (id)_momentNodesFromPersonNodes:(id)a0;
- (void)accumulateDetailsForUpdatedPersonNode:(id)a0 personChange:(id)a1;
- (void)accumulateDetailsForDeletedPersonNodes:(id)a0;
- (void)_accumulateMomentIdentifiersInto:(id)a0 forPersonNodes:(id)a1;

@end
