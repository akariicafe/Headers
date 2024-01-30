@class NSString, TSWPRangeMap;
@protocol TSWPTextSource;

@interface TSWPRubyTextSource : NSObject <TSWPTextSource> {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *__value_; } __end_cap_; } _spaceCharIndexes;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *__value_; } __end_cap_; } _bidiCharIndexes;
    id<TSWPTextSource> _source;
    TSWPRangeMap *_rangeMap;
    unsigned long long _length;
    unsigned long long _storageLength;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)length;
- (void).cxx_destruct;
- (void)dealloc;
- (id)string;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id).cxx_construct;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })wordAtCharIndex:(unsigned long long)a0 includePreviousWord:(BOOL)a1;
- (id)characterStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)paragraphStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)a0;
- (void)attributesAtCharIndex:(unsigned long long)a0 attributesOfInterest:(BOOL[19])a1 attributesTable:(id[19])a2 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (unsigned int)composedCharacterAtCharIndex:(unsigned long long)a0 isSurrogatePair:(BOOL *)a1;
- (unsigned long long)storageLength;
- (BOOL)adjustRangesByDelta:(long long)a0;
- (BOOL)hasColumnBreakAtCharIndex:(unsigned long long)a0;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)a0;
- (double)filteredCoreTextAttributesFontScaleEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 filterDelegate:(id)a1;
- (struct __CFDictionary { } *)createFilteredCoreTextAttributes:(struct __CFDictionary { } *)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 filterDelegate:(id)a2;
- (id)smartFieldAtCharIndex:(unsigned long long)a0 attributeKind:(unsigned int)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)smartFieldsWithAttributeKind:(unsigned int)a0 intersectingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)a0;
- (id)attachmentAtCharIndex:(unsigned long long)a0;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)a0;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)a0 forAttributeKind:(unsigned int)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)a0;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeMappedToStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeMappedFromStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)hyphenationLocationBeforeIndex:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 locale:(struct __CFLocale { } *)a2 hyphenChar:(unsigned int *)a3;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)a0;
- (id)initWithSource:(id)a0 subRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
