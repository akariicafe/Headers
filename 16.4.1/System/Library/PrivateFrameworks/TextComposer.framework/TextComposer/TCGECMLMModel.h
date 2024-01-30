@class NSDictionary;

@interface TCGECMLMModel : NSObject <TCGECModel> {
    struct CoreLanguageModelWithState { } *_maskedLM;
    unsigned long long _lmVocabSize;
    NSDictionary *_acceptableCorrections;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)enumerateIssuesForSentence:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithModelPath:(id)a0 OTABundlePath:(id)a1 options:(id)a2;
- (BOOL)loadCorrectionsFromURL:(id)a0;

@end
