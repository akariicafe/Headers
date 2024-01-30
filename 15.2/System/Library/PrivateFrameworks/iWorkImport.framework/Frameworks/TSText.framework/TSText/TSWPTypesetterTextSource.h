@class NSString, TSWPRangeMap;
@protocol TSWPTextSource;

@interface TSWPTypesetterTextSource : NSObject <TSWPTextSource> {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _spaceCharIndexes;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _bidiCharIndexes;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } _bidiDirectionMarkIsRTLVector;
    id<TSWPTextSource> _source;
    TSWPRangeMap *_rangeMap;
    unsigned long long _length;
    unsigned long long _storageChangeCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)changeCount;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)string;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })wordAtCharIndex:(unsigned long long)a0 includePreviousWord:(BOOL)a1;
- (id)characterStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)paragraphStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)a0;
- (void)attributesAtCharIndex:(unsigned long long)a0 attributesOfInterest:(BOOL[23])a1 attributesTable:(id[23])a2 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (unsigned int)composedCharacterAtCharIndex:(unsigned long long)a0 isSurrogatePair:(BOOL *)a1;
- (unsigned long long)storageLength;
- (BOOL)hasColumnBreakAtCharIndex:(unsigned long long)a0;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)a0;
- (id)smartFieldAtCharIndex:(unsigned long long)a0 attributeKind:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)smartFieldsWithAttributeKind:(unsigned long long)a0 intersectingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)a0;
- (id)attachmentAtCharIndex:(unsigned long long)a0;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)a0;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)a0 forAttributeKind:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)a0;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeMappedToStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeMappedFromStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)hyphenationLocationBeforeIndex:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 locale:(id)a2 hyphenChar:(unsigned int *)a3;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)a0;
- (id)initWithSource:(id)a0 subRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)dropCapStyleAtCharIndex:(unsigned long long)a0;
- (id)characterStyleForDropCapAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfDropCapAtCharIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })wordAtCharIndex:(unsigned long long)a0 includePreviousWord:(BOOL)a1 includeHyphenation:(BOOL)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeRemappedFromStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)adjustRangesByDelta:(long long)a0 startingAt:(unsigned long long)a1;
- (void)updateStorageChangeCount;
- (unsigned long long)spaceCharIndexCount;
- (unsigned long long)bidiCharIndexCount;

@end
