@class NSArray;

@interface PRCandidate : NSObject {
    NSArray *_candidateWords;
    struct _NSRange { unsigned long long location; unsigned long long length; } _replacementRange;
    double _errorScore;
    double _lmScore;
    BOOL _blocklisted;
    BOOL _hasCustomErrorScore;
}

+ (id)candidateWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorScore:(double)a2;
+ (id)candidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorScore:(double)a4 capitalizationDictionaryArray:(id)a5;
+ (id)candidateWithWords:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorScore:(double)a2;
+ (id)candidateWithWords:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorType:(unsigned long long)a2 errorModel:(id)a3;
+ (id)candidateWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorType:(unsigned long long)a2 errorModel:(id)a3;
+ (id)replacementCandidateWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 intendedCharacter:(unsigned short)a2 actualCharacter:(unsigned short)a3 errorModel:(id)a4;
+ (id)transpositionCandidateWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 intendedFirstCharacter:(unsigned short)a2 intendedSecondCharacter:(unsigned short)a3 errorModel:(id)a4;
+ (id)candidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorType:(unsigned long long)a4 errorModel:(id)a5 capitalizationDictionaryArray:(id)a6;
+ (id)replacementCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 intendedCharacter:(unsigned short)a4 actualCharacter:(unsigned short)a5 errorModel:(id)a6 capitalizationDictionaryArray:(id)a7;
+ (id)transpositionCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 intendedFirstCharacter:(unsigned short)a4 intendedSecondCharacter:(unsigned short)a5 errorModel:(id)a6 capitalizationDictionaryArray:(id)a7;

- (double)score;
- (void)dealloc;
- (id)string;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })replacementRange;
- (id)description;
- (unsigned long long)numberOfWords;
- (id)candidateWords;
- (void)setLanguageModelScore:(double)a0;
- (void)setBlocklisted:(BOOL)a0;
- (BOOL)isBlocklisted;
- (id)initWithCandidateWords:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorScore:(double)a2;
- (id)initWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorScore:(double)a2;
- (void)setCustomErrorScore:(BOOL)a0;
- (double)errorScore;
- (double)languageModelScore;
- (void)setErrorScore:(double)a0;
- (BOOL)hasCustomErrorScore;

@end
