@interface EARKeywordFinder : NSObject {
    struct unique_ptr<quasar::KeywordFinder, std::default_delete<quasar::KeywordFinder>> { struct __compressed_pair<quasar::KeywordFinder *, std::default_delete<quasar::KeywordFinder>> { struct KeywordFinder *__value_; } __ptr_; } _kwf;
}

+ (void)initialize;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)correctedResultWithKeyword:(id)a0 tokenizedKeyword:(id)a1 preItnSausage:(id)a2 preItnOneBest:(id)a3 preItnOneBestIndices:(id)a4 nbestSize:(long long)a5;

@end
