@class NSString, MAIndexCache, MARelation;

@interface MARelationFeatureExtractor : MAFeatureExtractor {
    NSString *_name;
}

@property (readonly, nonatomic) MAIndexCache *featureNameIndexCache;
@property (readonly, nonatomic) MARelation *relation;
@property (readonly, nonatomic) id /* block */ labelForTargetBlock;

- (void).cxx_destruct;
- (id)featureNames;
- (id)name;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 featureNames:(id)a1 relation:(id)a2 labelForTargetBlock:(id /* block */)a3;

@end
