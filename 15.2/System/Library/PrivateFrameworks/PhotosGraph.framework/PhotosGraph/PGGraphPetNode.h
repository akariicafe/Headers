@class NSString, PGGraphPetNodeCollection, MARelation;

@interface PGGraphPetNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    NSString *_localIdentifier;
    unsigned long long _petSpecies;
}

@property (class, readonly) MARelation *momentOfPet;

@property (readonly, nonatomic) PGGraphPetNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long petSpecies;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)ownerOfPet;
+ (id)stringFromPetSpecies:(unsigned long long)a0;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)ownerNodes;
- (id)initWithLocalIdentifier:(id)a0 petSpecies:(unsigned long long)a1;
- (void)enumerateOwnerNodesUsingBlock:(id /* block */)a0;

@end
