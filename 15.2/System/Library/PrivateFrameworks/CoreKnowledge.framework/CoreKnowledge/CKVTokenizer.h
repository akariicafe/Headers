@class NSLocale;

@interface CKVTokenizer : NSObject {
    struct unique_ptr<skitbridge::Tokenizer, std::default_delete<skitbridge::Tokenizer>> { struct __compressed_pair<skitbridge::Tokenizer *, std::default_delete<skitbridge::Tokenizer>> { struct Tokenizer *__value_; } __ptr_; } _tokenizer;
}

@property (readonly, nonatomic) NSLocale *locale;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)tokenizeString:(id)a0;
- (id)initWithLocale:(id)a0 assetPath:(id)a1 normalizeWords:(BOOL)a2;
- (id)initWithLocale:(id)a0 assetPath:(id)a1;

@end
