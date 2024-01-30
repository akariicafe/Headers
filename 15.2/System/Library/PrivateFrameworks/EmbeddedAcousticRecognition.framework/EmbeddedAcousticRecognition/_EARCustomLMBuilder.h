@interface _EARCustomLMBuilder : NSObject {
    struct unique_ptr<quasar::CustomLMBuilder, std::default_delete<quasar::CustomLMBuilder>> { struct __compressed_pair<quasar::CustomLMBuilder *, std::default_delete<quasar::CustomLMBuilder>> { struct CustomLMBuilder *__value_; } __ptr_; } _customLMBuilder;
    struct unique_ptr<sdapi::SdapiTokenizer, std::default_delete<sdapi::SdapiTokenizer>> { struct __compressed_pair<sdapi::SdapiTokenizer *, std::default_delete<sdapi::SdapiTokenizer>> { struct SdapiTokenizer *__value_; } __ptr_; } _tokenizer;
}

+ (void)initialize;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)getFstGrammar:(id)a0 overrideFolder:(id)a1 weight:(float)a2 errorOut:(id *)a3;

@end
