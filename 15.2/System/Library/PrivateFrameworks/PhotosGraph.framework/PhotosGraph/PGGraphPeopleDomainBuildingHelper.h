@class NSMutableDictionary;

@interface PGGraphPeopleDomainBuildingHelper : NSObject {
    NSMutableDictionary *_insertedIdentifiedPersonByPersonLocalIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (id)insertedIdentifiedPersonForPersonLocalIdentifier:(id)a0;
- (id)insertIdentifiedPersonWithPersonNode:(id)a0 forPersonLocalIdentifier:(id)a1;

@end
