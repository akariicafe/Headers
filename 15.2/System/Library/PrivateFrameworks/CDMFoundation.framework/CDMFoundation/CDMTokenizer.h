@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CDMTokenizer : NSObject {
    void *_analyzer;
    struct unique_ptr<morphun::analysis::DefaultAnalyzerFactory, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>> { struct __compressed_pair<morphun::analysis::DefaultAnalyzerFactory *, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>> { struct DefaultAnalyzerFactory *__value_; } __ptr_; } _analyzerFactory;
    struct unique_ptr<morphun::Tokenizer, std::default_delete<morphun::Tokenizer>> { struct __compressed_pair<morphun::Tokenizer *, std::default_delete<morphun::Tokenizer>> { struct Tokenizer *__value_; } __ptr_; } _tokenizer;
    void *_normalizer;
    struct unique_ptr<morphun::analysis::DefaultAnalyzerFactory, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>> { struct __compressed_pair<morphun::analysis::DefaultAnalyzerFactory *, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>> { struct DefaultAnalyzerFactory *__value_; } __ptr_; } _normalizerFactory;
    struct unique_ptr<morphun::util::ULocale, std::default_delete<morphun::util::ULocale>> { struct __compressed_pair<morphun::util::ULocale *, std::default_delete<morphun::util::ULocale>> { struct ULocale *__value_; } __ptr_; } _locale;
    NSString *_language;
    int _maxTokens;
    NSObject<OS_dispatch_queue> *_morphunForceUpdateQueue;
}

+ (BOOL)trialAssetUpdate:(id)a0;
+ (BOOL)syncTrialAsset:(id)a0;
+ (BOOL)registerTrialAsset:(id)a0;
+ (id)tokenizerForLocale:(id)a0;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithLocale:(id)a0 maxTokens:(int)a1 maxInputSize:(int)a2;
- (id)createTokenChain:(id)a0;

@end
