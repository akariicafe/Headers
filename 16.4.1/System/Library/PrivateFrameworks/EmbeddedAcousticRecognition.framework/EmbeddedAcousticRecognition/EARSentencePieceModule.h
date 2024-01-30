@interface EARSentencePieceModule : NSObject {
    struct shared_ptr<sentencepiece::SentencePieceProcessor> { struct SentencePieceProcessor *__ptr_; struct __shared_weak_count *__cntrl_; } _processor;
}

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (id)encodeUtterance:(id)a0;
- (id)initWithModelPath:(id)a0;
- (long long)setEncodeOptions:(id)a0;

@end
