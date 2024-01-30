@class NSString, PMLLexicon, NSCharacterSet;

@interface PMLFastTextVectorizer : NSObject <PMLTransformerProtocol> {
    PMLLexicon *_lexicon;
    unsigned long long _featureVectorLength;
    unsigned long long _vocabSize;
    unsigned long long _bucketSize;
    struct _NSRange { unsigned long long location; unsigned long long length; } _characterNGramRange;
    unsigned long long _maxTokenNGramLength;
    NSCharacterSet *_splitCharacterSet;
    unsigned long long _maxTokenLength;
    NSString *_bow;
    NSString *_eow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)transform:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)initWithLexiconPath:(id)a0 bucketSize:(unsigned long long)a1 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 maxTokenNGramLength:(unsigned long long)a3 featureVectorLength:(unsigned long long)a4 maxTokenLength:(unsigned long long)a5 bow:(id)a6 eow:(id)a7;
- (id)initWithLexicon:(id)a0 bucketSize:(unsigned long long)a1 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 maxTokenNGramLength:(unsigned long long)a3 featureVectorLength:(unsigned long long)a4 maxTokenLength:(unsigned long long)a5 bow:(id)a6 eow:(id)a7;
- (unsigned long long)_getVocabSize;
- (unsigned long long)_hashUniCharToBucket:(const unsigned short *)a0 len:(int)a1;
- (id)_splitTextToTokens:(id)a0;
- (void)_addCharacterNGramHashesToCounter:(id)a0 tokenIndices:(id)a1;
- (void)_addTokenNGramHashesToCounter:(id)a0 tokenIndices:(id)a1;

@end
