@class NSSet, NSString, NSArray, CLSFeederPrefetchOptions;

@interface PGAssetCollectionFeatureSpecification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *featureNodes;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureLabel;
@property (readonly, nonatomic) NSArray *featureDefinitions;
@property (readonly, nonatomic) BOOL shouldRunAtMomentIngest;
@property (readonly, nonatomic) BOOL shouldCreateFeatureNodeIfNeeded;
@property (readonly, nonatomic) CLSFeederPrefetchOptions *assetFeederPrefetchOptions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeatureType:(unsigned long long)a0 featureLabel:(id)a1 featureDefinitions:(id)a2 shouldRunAtMomentIngest:(BOOL)a3 shouldCreateFeatureNodeIfNeeded:(BOOL)a4;
- (void)enumerateFeatureNodesForMomentNode:(id)a0 withAssets:(id)a1 curationContext:(id)a2 usingBlock:(id /* block */)a3;
- (id)featureNodesForMomentNodeCollection:(id)a0;
- (id)addFeatureNodeIfNeededWithGraphBuilder:(id)a0;
- (BOOL)isRelatedToMomentNode:(id)a0;
- (id)_assetUUIDsFromAssets:(id)a0;

@end
