@interface SiriNLUTypesConverterUtils : NSObject

+ (struct unique_ptr<sirinluinternalssu::SSURequest, std::default_delete<sirinluinternalssu::SSURequest>> { struct __compressed_pair<sirinluinternalssu::SSURequest *, std::default_delete<sirinluinternalssu::SSURequest>> { struct SSURequest *x0; } x0; })convertSSURequestFromObjCToCpp:(id)a0;
+ (struct unique_ptr<sirinluinternal::TokenChain, std::default_delete<sirinluinternal::TokenChain>> { struct __compressed_pair<sirinluinternal::TokenChain *, std::default_delete<sirinluinternal::TokenChain>> { struct TokenChain *x0; } x0; })convertTokenChainFromObjCToCpp:(id)a0;
+ (struct unique_ptr<sirinluexternal::EntityCandidate, std::default_delete<sirinluexternal::EntityCandidate>> { struct __compressed_pair<sirinluexternal::EntityCandidate *, std::default_delete<sirinluexternal::EntityCandidate>> { struct EntityCandidate *x0; } x0; })convertEntityCandidateFromObjCToCpp:(id)a0;
+ (id)convertMatchingSpanFromCppToObjC:(void *)a0;
+ (struct unique_ptr<sirinluinternal::MatchingSpan, std::default_delete<sirinluinternal::MatchingSpan>> { struct __compressed_pair<sirinluinternal::MatchingSpan *, std::default_delete<sirinluinternal::MatchingSpan>> { struct MatchingSpan *x0; } x0; })convertMatchingSpanFromObjCToCpp:(id)a0;
+ (struct unique_ptr<sirinluinternal::NLv4EmbeddingTensor, std::default_delete<sirinluinternal::NLv4EmbeddingTensor>> { struct __compressed_pair<sirinluinternal::NLv4EmbeddingTensor *, std::default_delete<sirinluinternal::NLv4EmbeddingTensor>> { struct NLv4EmbeddingTensor *x0; } x0; })convertNLv4EmbeddingTensorFromObjCToCpp:(id)a0;
+ (id)convertNLv4ParserRequestFromCppToObjC:(void *)a0;
+ (struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct NLv4ParserRequest *x0; } x0; })convertNLv4ParserRequestToCpp:(id)a0;
+ (id)convertNLv4ParserResponseFromCppToObjC:(void *)a0;
+ (id)convertSSUResponseFromCppToObjC:(void *)a0;
+ (struct unique_ptr<sirinluexternal::UsoGraph, std::default_delete<sirinluexternal::UsoGraph>> { struct __compressed_pair<sirinluexternal::UsoGraph *, std::default_delete<sirinluexternal::UsoGraph>> { struct UsoGraph *x0; } x0; })convertUsoGraphFromObjCToCpp:(id)a0;
+ (struct Reader { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; })getCppReaderFromObjCObject:(id)a0;

@end
