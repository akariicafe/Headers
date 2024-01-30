@class NSString, TSWPRangeArray, TSWPDeletionRangeMap;

@interface TSWPFilteredString : NSString

@property (retain, nonatomic) NSString *sourceString;
@property (retain, nonatomic) TSWPDeletionRangeMap *rangeMap;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, retain, nonatomic) TSWPRangeArray *sourceRanges;

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)a0;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeMappedToStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })charRangeMappedFromStorage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithString:(id)a0 subrange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 removeRanges:(id)a2;

@end
