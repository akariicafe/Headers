@class NSArray, NSMutableArray, PRErrorModel;

@interface PRCandidateList : NSObject {
    NSMutableArray *_candidates;
    unsigned long long _maxCount;
    struct _NSRange { unsigned long long location; unsigned long long length; } _defaultReplacementRange;
    PRErrorModel *_errorModel;
    NSArray *_capitalizationDictionaryArray;
}

- (id)candidates;
- (BOOL)isFull;
- (unsigned long long)maxCount;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)addCandidate:(id)a0;
- (void)addCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 errorType:(unsigned long long)a2;
- (void)addCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 errorType:(unsigned long long)a3;
- (void)addCandidateWithString:(id)a0 errorType:(unsigned long long)a1;
- (void)addCandidateWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorType:(unsigned long long)a2;
- (void)addCandidateWithWords:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorType:(unsigned long long)a2;
- (void)addReplacementCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 intendedCharacter:(unsigned short)a3 actualCharacter:(unsigned short)a4;
- (void)addTranspositionCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 intendedFirstCharacter:(unsigned short)a3 intendedSecondCharacter:(unsigned short)a4;
- (id)candidateStrings;
- (id)candidateWithString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })defaultReplacementRange;
- (id)initWithMaxCount:(unsigned long long)a0 defaultReplacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 customErrorModel:(id)a2 capitalizationDictionaryArray:(id)a3;

@end
