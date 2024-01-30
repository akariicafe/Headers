@class MLTreeEnsembleClassifier, NSMutableArray, NSMutableOrderedSet;

@interface MLGKDecisionTree : NSObject {
    struct TreeEnsembleClassifier { void /* function */ **x0; struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x1; struct map<std::__1::pair<unsigned long, unsigned long>, int, std::__1::less<std::__1::pair<unsigned long, unsigned long> >, std::__1::allocator<std::__1::pair<const std::__1::pair<unsigned long, unsigned long>, int> > > { struct __tree<std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, std::__1::__map_value_compare<std::__1::pair<unsigned long, unsigned long>, std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, std::__1::less<std::__1::pair<unsigned long, unsigned long> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<unsigned long, unsigned long>, std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, std::__1::less<std::__1::pair<unsigned long, unsigned long> >, true> > { unsigned long long x0; } x2; } x0; } x2; struct TreeEnsembleParameters *x3; struct TreeEnsembleClassifier *x4; } *_trc;
    MLTreeEnsembleClassifier *_treeClassifier;
}

@property (retain, nonatomic) NSMutableArray *_attributes;
@property (retain, nonatomic) NSMutableOrderedSet *_objectStore;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithFlattenedTree:(id)a0;
- (BOOL)_saveModelAssetWithModelToPath:(id)a0 withError:(id)a1;
- (void)_loadModelAssetWithModelAtPath:(id)a0 withError:(id)a1;
- (id)_makeInferenceFromAnswers:(id)a0 withError:(id)a1;
- (id)_init;

@end
