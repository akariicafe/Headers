@interface NLLexiconCompletion : NSObject {
    unsigned int _tokenID;
    double _score;
}

- (double)score;
- (id)description;
- (unsigned int)tokenID;
- (id)initWithTokenID:(unsigned int)a0 score:(double)a1;

@end
