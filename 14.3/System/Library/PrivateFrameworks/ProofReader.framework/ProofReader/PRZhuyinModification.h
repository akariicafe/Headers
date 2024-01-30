@class NSString;

@interface PRZhuyinModification : PRModification {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSString *_replacementString;
    unsigned long long _modificationType;
    struct _NSRange { unsigned long long location; unsigned long long length; } _syllableRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _additionalSyllableRange;
    double _modificationScore;
    unsigned long long _syllableCountScore;
    unsigned char _letters[5];
    BOOL _producesPartialSyllable;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)dealloc;
- (unsigned long long)hash;
- (unsigned long long)modificationType;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)replacementString;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 modificationType:(unsigned long long)a2 syllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 additionalSyllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 modificationScore:(double)a5 syllableCountScore:(unsigned long long)a6 syllableLetters:(const char *)a7 producesPartialSyllable:(BOOL)a8;
- (double)modificationScore;
- (unsigned long long)syllableCountScore;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })syllableRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })additionalSyllableRange;
- (BOOL)producesPartialSyllable;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 modificationType:(unsigned long long)a2 syllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 modificationScore:(double)a4 syllableCountScore:(unsigned long long)a5 syllableLetters:(const char *)a6 producesPartialSyllable:(BOOL)a7;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })combinedSyllableRange;
- (BOOL)_shouldAppendLetter:(unsigned char)a0;

@end
