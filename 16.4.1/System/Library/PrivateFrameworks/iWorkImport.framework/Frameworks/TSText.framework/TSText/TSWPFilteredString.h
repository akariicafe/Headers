@class NSString, TSWPRangeArray, TSWPDeletionRangeMap;

@interface TSWPFilteredString : NSString <TSWPTextSource> {
    unsigned long long _length;
}

@property (retain, nonatomic) NSString *sourceString;
@property (retain, nonatomic) TSWPDeletionRangeMap *rangeMap;
@property (readonly, nonatomic) TSWPRangeArray *sourceRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringWithString:(id)a0;

- (unsigned long long)changeCount;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithString:(id)a0;
- (id)string;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)characterStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)paragraphStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })wordAtCharIndex:(unsigned long long)a0 includePreviousWord:(BOOL)a1;
- (id)attachmentAtCharIndex:(unsigned long long)a0;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)a0;
- (void)attributesAtCharIndex:(unsigned long long)a0 attributesOfInterest:(BOOL *)a1 attributesTable:(id *)a2 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)a0;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)a0;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeMappedFromStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeMappedToStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)checkDebug;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)a0;
- (BOOL)hasColumnBreakAtCharIndex:(unsigned long long)a0;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)a0;
- (long long)hyphenationLocationBeforeIndex:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 locale:(id)a2 hyphenChar:(unsigned int *)a3;
- (id)initWithString:(id)a0 subrange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 removeRanges:(id)a2;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)a0;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)a0 forAttributeKind:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)smartFieldAtCharIndex:(unsigned long long)a0 attributeKind:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)smartFieldsWithAttributeKind:(unsigned long long)a0 intersectingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)storageLength;
- (id)dropCapStyleAtCharIndex:(unsigned long long)a0;
- (BOOL)adjustRangesByDelta:(long long)a0 startingAt:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeRemappedFromStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)characterStyleForDropCapAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfDropCapAtCharIndex:(unsigned long long)a0;
- (void)updateStorageChangeCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })wordAtCharIndex:(unsigned long long)a0 includePreviousWord:(BOOL)a1 includeHyphenation:(BOOL)a2;

@end
