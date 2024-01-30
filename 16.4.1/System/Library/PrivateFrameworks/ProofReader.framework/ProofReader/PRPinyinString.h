@interface PRPinyinString : NSPinyinString {
    unsigned long long _originalLength;
    unsigned long long _originalCheckedLength;
    unsigned long long _modificationCount;
    unsigned long long *_modificationTypes;
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_originalRanges;
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_finalRanges;
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_originalSyllableRanges;
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_originalAdditionalSyllableRanges;
}

+ (id)alternativesForInputString:(id)a0;
+ (id)prefixesForInputString:(id)a0;
+ (id)correctionsForInputString:(id)a0;

- (unsigned long long)score;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)string;
- (unsigned long long)length;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)indexOfFirstModification;
- (BOOL)lastSyllableIsPartial;
- (id)nonPinyinIndexSet;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nonPinyinRangeAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfDeletions;
- (unsigned long long)numberOfInsertions;
- (unsigned long long)numberOfNonPinyinRanges;
- (unsigned long long)numberOfReplacements;
- (unsigned long long)numberOfTranspositions;
- (unsigned long long)syllableCount;
- (id)annotatedString;
- (unsigned long long)finalCheckedLength;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })finalRangeForModificationAtIndex:(unsigned long long)a0;
- (id)initWithString:(id)a0 syllableCount:(unsigned long long)a1 lastSyllableIsPartial:(BOOL)a2 score:(unsigned long long)a3 originalLength:(unsigned long long)a4 modificationType:(unsigned long long)a5 originalModificationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 finalModificationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7;
- (id)initWithString:(id)a0 syllableCount:(unsigned long long)a1 lastSyllableIsPartial:(BOOL)a2 score:(unsigned long long)a3 originalLength:(unsigned long long)a4 modificationType:(unsigned long long)a5 originalModificationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 finalModificationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7 originalSyllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8;
- (id)initWithString:(id)a0 syllableCount:(unsigned long long)a1 lastSyllableIsPartial:(BOOL)a2 score:(unsigned long long)a3 originalLength:(unsigned long long)a4 modificationType:(unsigned long long)a5 originalModificationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 finalModificationRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7 originalSyllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8 originalAdditionalSyllableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a9;
- (id)initWithString:(id)a0 syllableCount:(unsigned long long)a1 lastSyllableIsPartial:(BOOL)a2 score:(unsigned long long)a3 originalLength:(unsigned long long)a4 originalCheckedLength:(unsigned long long)a5 numberOfModifications:(unsigned long long)a6 modificationTypes:(unsigned long long *)a7 originalModificationRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a8 finalModificationRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a9 originalSyllableRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a10 originalAdditionalSyllableRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a11;
- (id)initWithUncheckedString:(id)a0 score:(unsigned long long)a1 originalLength:(unsigned long long)a2;
- (unsigned long long)numberOfModifications;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })originalAdditionalSyllableRangeForModificationAtIndex:(unsigned long long)a0;
- (unsigned long long)originalCheckedLength;
- (unsigned long long)originalLength;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })originalRangeForModificationAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })originalSyllableRangeForModificationAtIndex:(unsigned long long)a0;
- (unsigned long long)typeOfModificationAtIndex:(unsigned long long)a0;

@end
