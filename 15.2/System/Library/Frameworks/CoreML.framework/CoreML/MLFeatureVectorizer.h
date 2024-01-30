@class NSArray, NSString;

@interface MLFeatureVectorizer : MLModel <MLModelSpecificationLoader> {
    NSArray *_output_array_shape;
    struct vector<std::pair<unsigned long, unsigned long>, std::allocator<std::pair<unsigned long, unsigned long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned long, unsigned long> *, std::allocator<std::pair<unsigned long, unsigned long>>> { void *__value_; } __end_cap_; } index_mapping;
}

@property (readonly, nonatomic) NSArray *columnNameEncoding;
@property (readonly, nonatomic) NSArray *dimensionEncoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

- (id)vectorizeOneHotEncoderDict:(id)a0 index:(unsigned long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWith:(id)a0 dimensionEncoding:(id)a1 dataTransformerName:(id)a2 inputDescription:(id)a3 outputDescription:(id)a4 orderedInputFeatureNames:(id)a5 orderedOutputFeatureNames:(id)a6 configuration:(id)a7;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id).cxx_construct;

@end
