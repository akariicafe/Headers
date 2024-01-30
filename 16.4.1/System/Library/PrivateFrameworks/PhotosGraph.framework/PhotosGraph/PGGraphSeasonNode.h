@class PGGraphSeasonNodeCollection, NSString, NSArray, MANodeFilter;

@interface PGGraphSeasonNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature, MAUniquelyIdentifiableNode>

@property (readonly) NSString *name;
@property (readonly, nonatomic) PGGraphSeasonNodeCollection *collection;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (id)_localizationKeyForSeasonNode:(id)a0;
+ (id)dateOfSeason;
+ (id)filterForSeasonName:(id)a0;

- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)initWithName:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (id)propertyDictionary;
- (void).cxx_destruct;

@end
