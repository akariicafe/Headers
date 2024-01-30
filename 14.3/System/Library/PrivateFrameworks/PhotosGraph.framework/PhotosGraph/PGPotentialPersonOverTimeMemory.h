@class NSArray, PGGraphPersonNode;

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory

@property (readonly) PGGraphPersonNode *personNode;
@property (retain) NSArray *facedAssetLocalIdentifiers;
@property (retain) NSArray *bestAssetLocalIdentifiers;

- (void).cxx_destruct;
- (id)uuid;
- (id)initWithPersonNode:(id)a0 momentNodes:(id)a1;

@end
