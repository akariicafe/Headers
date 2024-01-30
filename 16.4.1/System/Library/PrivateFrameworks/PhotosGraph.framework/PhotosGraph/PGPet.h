@class NSString, NSMutableSet;

@interface PGPet : NSObject <PGGraphIngestPet>

@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned long long species;
@property (readonly, nonatomic) NSMutableSet *momentNodes;
@property (readonly, nonatomic) NSMutableSet *ownerNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLocalIdentifier:(id)a0 petSpecies:(unsigned long long)a1 momentNodes:(id)a2 ownerNodes:(id)a3;

@end
