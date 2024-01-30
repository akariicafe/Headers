@protocol PMLWordPieceVocabProtocol;

@interface PMLWordPieceTokenizer : NSObject {
    id<PMLWordPieceVocabProtocol> _vocab;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithVocab:(id)a0;
- (unsigned int)startId;
- (unsigned int)endId;
- (unsigned int)padId;
- (int)toTokens:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 fromInput:(id)a1 withLength:(unsigned long long)a2;
- (id)tokenize:(id)a0 withLength:(unsigned long long)a1;
- (int)tokenizeToIds:(float *)a0 fromString:(id)a1 tokens:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 tokenCount:(int)a3 length:(unsigned long long)a4;

@end
