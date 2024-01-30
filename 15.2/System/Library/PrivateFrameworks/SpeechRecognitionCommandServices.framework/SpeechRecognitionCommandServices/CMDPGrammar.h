@class NSString, NSMutableArray;

@interface CMDPGrammar : NSObject {
    int _nextFstState;
    int _nextLabelIndex;
    BOOL _addOptionalFst;
    struct unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>, std::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> { struct __compressed_pair<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>> *, std::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> { void *__value_; } __ptr_; } _grammarFst;
    BOOL _rebuildGrammar;
    struct vector<std::pair<std::string, std::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::allocator<std::pair<std::string, std::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<std::string, std::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> *, std::allocator<std::pair<std::string, std::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> { void *__value_; } __end_cap_; } _labelFstPairVector;
    struct unique_ptr<CMDPNormalizer, std::default_delete<CMDPNormalizer>> { struct __compressed_pair<CMDPNormalizer *, std::default_delete<CMDPNormalizer>> { struct CMDPNormalizer *__value_; } __ptr_; } _normalizer;
    NSString *_currentBuiltInLMString;
    NSString *_currentCommandIdentifier;
    NSMutableArray *_grammarDataArray;
    struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long __value_; } __pair3_; } __tree_; } _symbol_set;
    struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long __value_; } __pair3_; } __tree_; } _special_symbol_set;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)buildGrammarFst:(void *)a0 forCommandTree:(id)a1 withFstArcDictionary:(id)a2;
- (void)addPhrase:(id)a0 toFst:(void *)a1 withArc:(struct _FstArc { int x0; int x1; })a2;
- (void)addAdlibFstWithLabel:(const void *)a0 outputIndex:(int)a1;
- (void)addOptionalFstWithLabel;
- (id)initWithCommandTreeDictionary:(id)a0 forLocaleIdentifier:(id)a1;
- (void *)grammarFst;
- (id)grammarData;

@end
