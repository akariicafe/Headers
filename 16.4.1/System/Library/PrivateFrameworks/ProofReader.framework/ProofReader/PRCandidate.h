@class NSString, NSArray;

@interface PRCandidate : NSObject

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSArray *candidateWords;
@property (readonly, nonatomic) unsigned long long numberOfWords;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } replacementRange;
@property (readonly, nonatomic) double score;
@property (nonatomic) double errorScore;
@property (nonatomic) double linguisticScore;
@property (nonatomic) double lexiconScore;
@property (nonatomic, getter=isBlocklisted) BOOL blocklisted;
@property (nonatomic, getter=hasCustomErrorScore) BOOL customErrorScore;

+ (id)candidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorScore:(double)a4 capitalizationDictionaryArray:(id)a5;
+ (id)candidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorType:(unsigned long long)a4 errorModel:(id)a5 capitalizationDictionaryArray:(id)a6;
+ (id)candidateWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorScore:(double)a2;
+ (id)candidateWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorType:(unsigned long long)a2 errorModel:(id)a3;
+ (id)candidateWithWords:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorScore:(double)a2;
+ (id)candidateWithWords:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorType:(unsigned long long)a2 errorModel:(id)a3;
+ (id)replacementCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 intendedCharacter:(unsigned short)a4 actualCharacter:(unsigned short)a5 errorModel:(id)a6 capitalizationDictionaryArray:(id)a7;
+ (id)replacementCandidateWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 intendedCharacter:(unsigned short)a2 actualCharacter:(unsigned short)a3 errorModel:(id)a4;
+ (id)transpositionCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 intendedFirstCharacter:(unsigned short)a4 intendedSecondCharacter:(unsigned short)a5 errorModel:(id)a6 capitalizationDictionaryArray:(id)a7;
+ (id)transpositionCandidateWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 intendedFirstCharacter:(unsigned short)a2 intendedSecondCharacter:(unsigned short)a3 errorModel:(id)a4;

- (void)dealloc;
- (id)description;
- (id)initWithCandidateWords:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorScore:(double)a2;
- (id)initWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorScore:(double)a2;

@end
