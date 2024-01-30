@class NSString, NSMutableArray;

@interface MLGLMClassification : MLClassifier <MLModelSpecificationLoader> {
    struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } intercept;
    struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > *__begin_; struct vector<double, std::__1::allocator<double> > *__end_; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > *__value_; } __end_cap_; } weights;
    NSMutableArray *classLabels;
    long long classType;
    int postEvalTransForm;
    int classEncoding;
    struct shared_ptr<CoreML::Specification::Model> { struct Model *__ptr_; struct __shared_weak_count *__cntrl_; } m_spec;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;

- (BOOL)calculateClassProbability:(double *)a0 input:(id)a1 error:(id *)a2;
- (id)classify:(id)a0 topK:(unsigned long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;
- (id).cxx_construct;
- (id)classify:(id)a0 error:(id *)a1;

@end
