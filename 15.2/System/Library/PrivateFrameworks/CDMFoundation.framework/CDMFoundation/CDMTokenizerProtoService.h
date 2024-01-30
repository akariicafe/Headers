@class CDMTokenizer;

@interface CDMTokenizerProtoService : CDMDAGBaseService {
    CDMTokenizer *_tokenizer;
}

+ (id)createProtoTokenRequestWithAsrOutputs:(id)a0 locale:(id)a1;
+ (id)createProtoTokenRequestWithText:(id)a0 locale:(id)a1;
+ (id)tokenChainFromProto:(id)a0;

- (id)handle:(id)a0;
- (void).cxx_destruct;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;

@end
