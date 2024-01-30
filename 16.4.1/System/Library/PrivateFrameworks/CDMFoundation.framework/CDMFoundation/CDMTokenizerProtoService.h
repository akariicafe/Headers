@class CDMTokenizer;

@interface CDMTokenizerProtoService : CDMDAGBaseService {
    CDMTokenizer *_tokenizer;
}

+ (id)createProtoTokenRequestWithAsrOutputs:(id)a0 locale:(id)a1;
+ (id)createProtoTokenRequestWithText:(id)a0 locale:(id)a1;
+ (id)tokenChainFromProto:(id)a0;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)handleRequestCommandTypeNames;

@end
