@class NSArray, NSString;

@interface MLFeatureVectorizer : MLModel <MLModelSpecificationLoader> {
    NSArray *_output_array_shape;
    struct vector<std::__1::pair<unsigned long, unsigned long>, std::__1::allocator<std::__1::pair<unsigned long, unsigned long> > > { struct pair<unsigned long, unsigned long> *__begin_; struct pair<unsigned long, unsigned long> *__end_; struct __compressed_pair<std::__1::pair<unsigned long, unsigned long> *, std::__1::allocator<std::__1::pair<unsigned long, unsigned long> > > { struct pair<unsigned long, unsigned long> *__value_; } __end_cap_; } index_mapping;
}

@property (readonly, nonatomic) NSArray *columnNameEncoding;
@property (readonly, nonatomic) NSArray *dimensionEncoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)vectorizeOneHotEncoderDict:(id)a0 index:(unsigned long long)a1 error:(id *)a2;
- (id).cxx_construct;
- (id)initWith:(id)a0 dimensionEncoding:(id)a1 dataTransformerName:(id)a2 inputDescription:(id)a3 outputDescription:(id)a4 orderedInputFeatureNames:(id)a5 orderedOutputFeatureNames:(id)a6 configuration:(id)a7;

@end
