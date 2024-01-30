@class UPPLPostProcessor;

@interface UPPLNerHandler : NSObject {
    struct unique_ptr<global_ner::GlobalNerHandler, std::default_delete<global_ner::GlobalNerHandler>> { struct __compressed_pair<global_ner::GlobalNerHandler *, std::default_delete<global_ner::GlobalNerHandler>> { struct GlobalNerHandler *__value_; } __ptr_; } _handler;
    UPPLPostProcessor *_postProcessor;
}

@property (readonly, nonatomic) unsigned long long maxTokens;
@property (readonly, nonatomic) unsigned long long maxTokenLength;
@property (readonly, nonatomic) unsigned long long beamSize;
@property (readonly, nonatomic) BOOL wordCharactersTensorEnabled;
@property (readonly, nonatomic) BOOL wordLengthTensorEnabled;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)generatePlumSpansForRequest:(id)a0;
- (id)initWithLocale:(id)a0 modelDir:(id)a1 vocabTagsFile:(id)a2 transParamsFile:(id)a3 charIndicesFile:(id)a4 configFile:(id)a5 padCharacter:(id)a6 unkCharacter:(id)a7;
- (id)predictNamedEntitiesForRequest:(id)a0;
- (void)loadConfigs:(id)a0;
- (id)initWithLocale:(id)a0 modelDir:(id)a1 vocabTagsFile:(id)a2 transParamsFile:(id)a3 charIndicesFile:(id)a4 configFile:(id)a5;

@end
