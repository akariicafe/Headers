@class NSString, CRTextSequenceRecognizerModel, NSOrderedSet, NSMutableSet, NSLocale, CRRegex, CRNeuralRecognizerConfiguration;

@interface CRCTCCVNLPTextDecoder : NSObject <CRTextDecoding>

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSMutableSet *subscribedLocales;
@property (retain) CRTextSequenceRecognizerModel *model;
@property (retain, nonatomic) CRRegex *regExpressions;
@property (nonatomic) BOOL shouldUseLM;
@property (nonatomic) BOOL shouldUseFalsePositiveFiltering;
@property (readonly, nonatomic) NSOrderedSet *characterObservations;
@property (readonly) struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; } pruningPolicy;
@property (retain) CRNeuralRecognizerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct unordered_map<CRDisambiguatedScript, std::vector<unsigned long>, std::hash<CRDisambiguatedScript>, std::equal_to<CRDisambiguatedScript>, std::allocator<std::pair<const CRDisambiguatedScript, std::vector<unsigned long>>>> { struct __hash_table<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, std::__unordered_map_hasher<CRDisambiguatedScript, std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, std::hash<CRDisambiguatedScript>, std::equal_to<CRDisambiguatedScript>, true>, std::__unordered_map_equal<CRDisambiguatedScript, std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, std::equal_to<CRDisambiguatedScript>, std::hash<CRDisambiguatedScript>, true>, std::allocator<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<CRDisambiguatedScript, std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, std::hash<CRDisambiguatedScript>, std::equal_to<CRDisambiguatedScript>, true>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<CRDisambiguatedScript, std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, std::equal_to<CRDisambiguatedScript>, std::hash<CRDisambiguatedScript>, true>> { float x0; } x3; } x0; })_disambiguatedScriptFeatureIndicesWithInfo:(id)a0;
+ (unsigned long long)_disambiguatedScriptForString:(id)a0;
+ (void)_postprocessReplaceUkrainianApostrophesForFeature:(id)a0 decodingLocale:(id)a1;
+ (void)_updateStringValuesByCombiningCharacterTokensForFeature:(id)a0;
+ (id)lmSupportedLanguages;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_buildActivationMatrices:(id)a0;
- (id /* block */)_commitActionBehavior;
- (void)_create2DArraysFromInputArray:(id)a0 classSize:(unsigned long long *)a1 outputArrays:(void *)a2;
- (id)_cvnlpDecodingResultForActivationMatrix:(id)a0 decodingLocale:(id)a1 beamSearchConfig:(id)a2 lmConfig:(id)a3 error:(id *)a4;
- (BOOL)_decodeFeaturesWithInfo:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (BOOL)_decodeSingleFeatureWithInfo:(id)a0 decodingLocale:(id)a1 greedyDecoder:(id)a2 greedyConfig:(id)a3 beamSearchConfig:(id)a4 imageSize:(struct CGSize { double x0; double x1; })a5 useCharacterBoxes:(BOOL)a6 lmConfig:(id)a7 error:(id *)a8;
- (BOOL)_shouldUseCharacterDecodingToken;
- (BOOL)_wordLMShouldFilterCandidate:(id)a0 inLocale:(id)a1 lmConfig:(id)a2;
- (void)computeLanguageRecognitionForSession:(id)a0 output:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 model:(id)a1 error:(id *)a2;
- (id)newLanguageRecognizerSession;
- (void)releaseUnusedResources;
- (BOOL)shouldDecodeWithLM;

@end
