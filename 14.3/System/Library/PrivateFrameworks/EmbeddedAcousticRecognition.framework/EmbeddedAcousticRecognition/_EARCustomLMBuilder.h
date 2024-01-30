@interface _EARCustomLMBuilder : NSObject {
    struct unique_ptr<quasar::CustomLMBuilder, std::__1::default_delete<quasar::CustomLMBuilder> > { struct __compressed_pair<quasar::CustomLMBuilder *, std::__1::default_delete<quasar::CustomLMBuilder> > { struct CustomLMBuilder *__value_; } __ptr_; } _customLMBuilder;
    struct unique_ptr<sdapi::SdapiTokenizer, std::__1::default_delete<sdapi::SdapiTokenizer> > { struct __compressed_pair<sdapi::SdapiTokenizer *, std::__1::default_delete<sdapi::SdapiTokenizer> > { struct SdapiTokenizer *__value_; } __ptr_; } _tokenizer;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id).cxx_construct;
- (BOOL)getFstGrammar:(id)a0 overrideFolder:(id)a1 weight:(float)a2 errorOut:(id *)a3;

@end
